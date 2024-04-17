from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def home(request):
    # return HttpResponse('---App Home Page---')
    return HttpResponse(""" 
                        <h1 style='color: green;'> ---App-01 Home Page--- </h1> 
                        <h2 style='color: green;'> Hello Django!!! </h2> 
                        <h3 style='color: red;'> Hello Django!!! </h3> 
                        <h4 style='color: blue;'> Hello Django!!! </h4> 
                        <h5 style='color: gray;'> Hello Django!!! </h5> 
                        """)

def dynamic(request):
    return HttpResponse(""" 
                        <h1 < style="color: blue;">http://localhost:8000/app/dynamic/<span style="color: red;">... </span></h1>
                        <h2>'< int:id >' integer id</h2>
                        <h2>'< str:id >' string id</h2>
                        <h2>'< slug:id >' slug id <span style="color: red;">not allowd (@, !, #, $, ...)</span></h2>
                        <h2>'< id >' for any type</h2>
                        """)

def dynamic_raute(request, id):
    # return HttpResponse('Product Details Page of Product id: ' + str(id)) # int -> string
    return HttpResponse('Product Details Page of Product id: ' + id)
