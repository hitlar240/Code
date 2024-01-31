from django.shortcuts import render, redirect
from categories import forms

# Create your views here.
def home(req):
    if req.method == "POST":
        category_form = forms.CategoryForm(req.POST)
        if category_form.is_valid():
            category_form.save()
            return redirect('categories_home')
    category_form = forms.CategoryForm()
    return render(req, 'categories/index.html', {'form': category_form})