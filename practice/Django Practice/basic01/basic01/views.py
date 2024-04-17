from django.http import HttpResponse
from django.shortcuts import render

def home(request):
    # return HttpResponse('---Home Page---')
    # return HttpResponse("<h1 style='color: green;'> ---Home Page--- </h1>")
    # return render(request, 'index1.html') # include
    return render(request, 'index2.html') # extends


