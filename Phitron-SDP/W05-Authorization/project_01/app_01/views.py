from django.shortcuts import render, redirect
from app_01 import forms
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash

# Create your views here.
def register(req):
    if not req.user.is_authenticated:
        if req.method == "POST":
            form = forms.RegForm(req.POST)
            if form.is_valid():
                form.save()
                messages.success(req, 'Registered Successfully!!!')
                print(form.cleaned_data)
                # return redirect('register')
        else:
            form = forms.RegForm()
        return render(req, 'app_01/register.html', {'form': form})
    return redirect('profile')


def user_login(req):
    if not req.user.is_authenticated:
        if req.method == "POST":
            form = AuthenticationForm(request=req, data=req.POST)
            if form.is_valid():
                user_name = form.cleaned_data['username']
                user_password = form.cleaned_data['password']
                user = authenticate(username=user_name, password=user_password)
                if user is not None:
                    login(req, user)
                    return redirect('profile')
        else:
            form = AuthenticationForm()
            
        return render(req, 'app_01/login.html', {'form': form})
    else:
        return redirect('profile')


def profile(req):
    if req.user.is_authenticated:
        return render(req, 'app_01/profile.html', {'user': req.user})
    return redirect('login')

def user_logout(req):
    logout(req)
    return redirect('login')


def pass_change(req):
    if req.method=='POST':
        # form = PasswordChangeForm(user=req.user, data=req.POST)
        form = SetPasswordForm(user=req.user, data=req.POST)
        if form.is_valid():
            form.save()
            update_session_auth_hash(req, form.user)
            messages.success(req, 'Password changed Successfully!!!')
            return redirect('profile')
    else:
        # form = PasswordChangeForm(user=req.user)
        form = SetPasswordForm(user=req.user)
    return render(req, 'app_01/passchange.html', {'form':form})

def changedata(req):
    if req.user.is_authenticated:
        if req.method == "POST":
            form = forms.ChangeDataForm(req.POST, instance=req.user)
            if form.is_valid():
                form.save()
                messages.success(req, 'Profile Updated Successfully!!!')
                # print(form.cleaned_data)
                return redirect('profile')
        else:
            form = forms.ChangeDataForm(instance=req.user)
        return render(req, 'app_01/changedata.html', {'form': form})
    return redirect('signup')
