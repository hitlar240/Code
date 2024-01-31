from django.shortcuts import render
from app_01.forms import contactForm, studentData, passwardData
# Create your views here.

def home(req):
    return render(req, 'app_01/home.html')

def about(req):
    if req.method == 'POST': 
        print(req.POST)
        username = req.POST.get('username')
        useremail = req.POST.get('useremail')
        select = req.POST.get('select')
        return render(req, 'app_01/about.html', {'username': username, 'useremail': useremail, 'select': select})
    return render(req, 'app_01/about.html')

def form(req):
    # print(req.POST)
    # if req.method == 'POST': 
    #     username = req.POST.get('username')
    #     useremail = req.POST.get('useremail')
    #     return render(req, 'app_01/form.html', {'username': username, 'useremail': useremail})
    return render(req, 'app_01/form.html')

def djangoForm(req):
    if req.method == 'POST':
        form = contactForm(req.POST, req.FILES)
        if form.is_valid():
            # file = form.cleaned_data['file']
            # with open('app_01/upload/' + file.name, 'wb+') as destination:
            #     for chunk in file.chunks():
            #         destination.write(chunk)
            print(form.cleaned_data)
    else:
        form = contactForm()
    return render(req, 'app_01/django_form.html',{'form': form})

def studentForm(req):
    if req.method == "POST":
        form = studentData(req.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = studentData()
    return render(req, 'app_01/stu_form.html', {'form': form})

def passwardValidation(req):
    if req.method == "POST":
        form = passwardData(req.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = passwardData()
    return render(req, 'app_01/pass_form.html', {'form': form})