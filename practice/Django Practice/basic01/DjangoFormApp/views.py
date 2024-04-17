from django.shortcuts import render
from . import forms

# Create your views here.
def home(req):
    
    form = forms.UserForm()
    return render(req, 'DjangoFormApp/index.html', {'form': form})


def user_form(req):
    form = forms.UserForm()
    return render(req, 'DjangoFormApp/user_form.html', {'form': form})