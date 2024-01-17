from django.http import HttpResponse
from django.shortcuts import render

def home(req):
    # return HttpResponse("this is home page")
    return render(req,'home.html')