from django.shortcuts import render
from posts.models import Posts

def home(req):
    posts = Posts.objects.all()
    print(posts)
    return render(req, 'home.html', {'posts': posts})