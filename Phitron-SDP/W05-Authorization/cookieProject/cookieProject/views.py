from django.shortcuts import render
from datetime import datetime, timedelta

def home(req):
    response = render(req, 'home.html')
    response.set_cookie('name', 'tom')
    # response.set_cookie('name', 'tanvir', max_age=60*3)
    response.set_cookie('name', 'tanvir', expires=datetime.utcnow()+timedelta(days=7))
    return response

def get_cookie(req):
    name = req.COOKIES.get('name')
    print(req.COOKIES)
    return render(req, 'get.html', {'name': name})

def delete_cookie(req):
    response = render(req, 'delete.html')
    response.delete_cookie('name')
    return response