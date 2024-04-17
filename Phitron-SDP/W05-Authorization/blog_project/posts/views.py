from django.shortcuts import render, redirect
from posts import forms, models
from django.contrib.auth.decorators import login_required

# Create your views here.
@login_required
def add_post(req):
    if req.method == "POST":
        post_form = forms.PostForm(req.POST)
        if post_form.is_valid():
            # post_form.cleaned_data['author'] = req.user
            post_form.instance.author = req.user
            post_form.save()
            return redirect('profile')
    post_form = forms.PostForm()
    return render(req, 'form.html', {'form': post_form, 'type':'Add Post'})

@login_required
def edit_post(req, id):
    post = models.Posts.objects.get(pk=id)
    post_form = forms.PostForm(instance=post)
    # print(post)
    if req.method == "POST":
        post_form = forms.PostForm(req.POST, instance=post)
        if post_form.is_valid():
            post_form.save()
            return redirect('home')
    return render(req, 'form.html', {'form': post_form, 'type':'Edit Post'})

@login_required
def delete_post(req, id):
    post = models.Posts.objects.get(pk=id)
    post.delete()
    return redirect('profile')