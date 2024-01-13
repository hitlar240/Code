from django.http import HttpResponse

def home(request):
    return HttpResponse("this is home page")

def contact(repuest):
    return HttpResponse("this is contact page")