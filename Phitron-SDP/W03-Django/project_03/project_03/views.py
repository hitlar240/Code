from django.http import HttpResponse
from django.shortcuts import render

def home(req):
    # return HttpResponse("home page")
    return render(req, 'home.html')