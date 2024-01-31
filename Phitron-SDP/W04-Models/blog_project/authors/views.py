from django.shortcuts import render, redirect
from authors import forms

# Create your views here.
def home(req):
    if req.method == "POST":
        author_form = forms.AuthorForm(req.POST)
        if author_form.is_valid():
            author_form.save()
            return redirect('author_home')
    author_form = forms.AuthorForm()    
    return render(req, 'authors/index.html', {'form': author_form})