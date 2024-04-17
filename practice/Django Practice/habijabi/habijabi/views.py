from django.shortcuts import render

def home(req):
    return render(req,'index.html')

def user_form(req):
    return render(req, 'form.html')