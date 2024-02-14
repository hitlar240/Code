from django.shortcuts import render, redirect
from authors import forms
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth import authenticate, login, logout
from django.contrib import messages
from django.contrib.auth.decorators import login_required

# Create your views here.
def register(req):
    if req.method == "POST":
        author_form = forms.RegForm(req.POST)
        if author_form.is_valid():
            author_form.save()
            messages.success(req, 'Account Created Successfully!')
            return redirect('register')
    author_form = forms.RegForm()    
    return render(req, 'authors/form.html', {'form': author_form, 'type':'Registration'})


def user_login(req):
    if req.method == 'POST':
        login_form = AuthenticationForm(req, req.POST)
        if login_form.is_valid():
            user_name = login_form.cleaned_data['username']
            user_pass = login_form.cleaned_data['password']
            user = authenticate(username=user_name, password=user_pass)
            if user is not None:
                login(req, user)
                messages.success(req, 'Logged in Successfully!')
                return redirect('home')
            else:
                return redirect('login')
            
    login_form =  AuthenticationForm()
    return render(req, 'authors/form.html', {'form':login_form, 'type':'Login'})

@login_required
def profile(req):
    if req.method == "POST":
        profile_form = forms.ChangeDataForm(req.POST, instance=req.user)
        if profile_form.is_valid():
            profile_form.save()
            messages.success(req, 'Profile Updated!!')
            return redirect('home')
    profile_form = forms.ChangeDataForm(instance=req.user)
    return render(req, 'authors/profile.html', {'form':profile_form})