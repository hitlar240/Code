from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def home(request):
    # return HttpResponse("this is app_01 home page")
    return render(request, 'app_01/home.html') #from app templates folder (default)

def courses(request):
    return HttpResponse("this is app_01/courses page")

def about(request):
    return HttpResponse("this is app_01/about page")
