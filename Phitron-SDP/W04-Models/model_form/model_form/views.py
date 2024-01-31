from django.shortcuts import render
from app_01.forms import studentForm

def home(req):
    # stu = studentForm()
    if req.method == 'POST':
        form = studentForm(req.POST)
        if form.is_valid():
            # form.save(commit=False)
            form.save()
            print(form.cleaned_data)
    else:
        form = studentForm()
    return render(req, 'home.html', {"form": form})