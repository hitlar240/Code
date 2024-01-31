from django.shortcuts import render, redirect
from posts import forms, models

# Create your views here.
def home(req):
    if req.method == "POST":
        post_form = forms.PostForm(req.POST)
        if post_form.is_valid():
            post_form.save()
            return redirect('posts_home')
    post_form = forms.PostForm()
    return render(req, 'posts/index.html', {'form': post_form})

def edit_post(req, id):
    post = models.Posts.objects.get(pk=id)
    post_form = forms.PostForm(instance=post)
    # print(post)
    if req.method == "POST":
        post_form = forms.PostForm(req.POST, instance=post)
        if post_form.is_valid():
            post_form.save()
            return redirect('home')
    return render(req, 'posts/index.html', {'form': post_form})

def delete_post(req, id):
    post = models.Posts.objects.get(pk=id)
    post.delete()
    return redirect('home')