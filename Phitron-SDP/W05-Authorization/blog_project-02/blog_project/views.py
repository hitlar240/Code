from django.shortcuts import render
from posts.models import Posts
from categories.models import Categories

def home(req, category_slug=None):
    posts = Posts.objects.all()
    if category_slug is not None:
        category = Categories.objects.get(slug= category_slug)
        posts = Posts.objects.filter(category=category)

    categories = Categories.objects.all()
    return render(req, 'home.html', {'posts': posts, 'categories':categories})
