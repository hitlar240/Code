from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def home(req):
    return HttpResponse("navigation home page")

def about(req):
    # return HttpResponse("navigation about page")
    return render(req,'navigation/about.html')

def contact(req):
    # return HttpResponse("navigation contact page")
    return render(req,'navigation/contact.html')