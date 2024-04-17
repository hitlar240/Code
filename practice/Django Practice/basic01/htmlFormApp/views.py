from django.shortcuts import render, redirect
from django.http import HttpResponse, HttpResponseRedirect

# Create your views here.
def home(req):
    try:
        name = req.GET.get('value1')
        address = req.GET['value2']
        print(name, address)
    except: # if there is any error in the try block
        pass
    return render(req, 'htmlFormApp/index.html')



def getForm(req):
    sum = 0  #initially
    try:
        # by default get method
        num1 = int(req.GET.get('value1'))
        num2 = int(req.GET['value2'])
        sum = num1 + num2
        print(sum)
    except: # if there is any error in the try block
        print('no value entered yet!!!')
    return render(req, 'htmlFormApp/form_get.html', {'sum': sum})



def redirectPage(req):
    # return HttpResponse(req)
    if req.method == 'POST':
        num1 = int(req.POST.get('value1'))
        num2 = int(req.POST['value2'])
        sum = num1 + num2
        data = { # store data
            'n1': num1,
            'n2': num2,
            'sum': sum
        }
        # return HttpResponse(sum)
        # return redirect('form_home')
        # return render(req, 'htmlFormApp/index.html', data)
        return render(req, 'htmlFormApp/redirect.html', data)
    return render(req, 'htmlFormApp/redirect.html')


def postForm(req):
    sum = 0  #initially
    data = {} 
    try:
        if req.method == 'POST':
            num1 = int(req.POST.get('value1'))
            num2 = int(req.POST['value2'])
            sum = num1 + num2
            data = { # store data
                'n1': num1,
                'n2': num2,
                'sum': sum
            }
            url = 'http://127.0.0.1:8000/Django-form/redirect/?num1={}&num2={}&sum={}'.format(num1,num2,sum)

            # return HttpResponseRedirect('/form/') # redirect to 'http://127.0.0.1:8000/form/'
            # return redirect('/form/') # redirect to 'http://127.0.0.1:8000/form/'
            # return redirect('form_home') # redirect to 'form_home'

            # return HttpResponseRedirect(url) # redirect to 'http://127.0.0.1:8000/redirect/?num1=...&num2=...&sum=...'
            # return redirect(url) # redirect to 'http://127.0.0.1:8000/redirect/?num1=...&num2=...&sum=...'
        
            # return redirect('post_form')
            # return redirect(req, 'post_form')
            return render(req, 'htmlhtmlFormApp/form_post.html', data)
        
    except: # if there is any error in the try block
        print('no value entered yet!!!')
    return render(req, 'htmlhtmlFormApp/form_post.html', data)



def actionForm(req):
    return render(req, 'htmlFormApp/action.html')