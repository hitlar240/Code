from django.shortcuts import render, redirect
from authors import forms
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from posts.models import Posts

from django.contrib.auth.views import LoginView, LogoutView
from django.urls import reverse_lazy

# Create your views here.
def register(req):
    if req.method == "POST":
        author_form = forms.RegForm(req.POST)
        if author_form.is_valid():
            author_form.save()
            messages.success(req, 'Account Created Successfully!')
            return redirect('register')
    author_form = forms.RegForm()    
    return render(req, 'form.html', {'form': author_form, 'type':'Registration'})

""" 
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
                return redirect('profile')
            else:
                messages.success(req, 'Wrong Username or Password!')
                # return redirect('login')
    login_form =  AuthenticationForm()
    return render(req, 'form.html', {'form':login_form, 'type':'Login'})
 """

class UserLogin(LoginView):
    template_name = 'form.html'
    # success_url = reverse_lazy('profile')
    def get_success_url(self):
        return reverse_lazy('profile')
    def form_valid(self, form):
        messages.success(self.request, 'Logged in successfull!!')
        return super().form_valid(form)
    def form_invalid(self, form):
        messages.success(self.request, 'Wrong username or password!!')
        return super().form_invalid(form)
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type'] = 'Login'
        return context





def user_logout(req):
    logout(req)
    messages.success(req, 'Logged out Successfully!')
    return redirect('login')

""" 
class UserLogout(LogoutView):
    template_name = 'form.html'
    # success_url = reverse_lazy('logout')
    def get_success_url(self):
        return reverse_lazy('login')
 """

def profile(req):
    # posts = Posts.objects.all()
    posts = Posts.objects.filter(author= req.user)
    return render(req, 'authors/profile.html', {'posts': posts})

@login_required
def edit_profile(req):
    if req.method == "POST":
        profile_form = forms.ChangeDataForm(req.POST, instance=req.user)
        if profile_form.is_valid():
            profile_form.save()
            messages.success(req, 'Profile Updated!!')
            return redirect('edit_profile')
    profile_form = forms.ChangeDataForm(instance=req.user)
    return render(req, 'form.html', {'form':profile_form, 'type':'Edit Profile'})


def change_pass(req):
    if req.method == "POST":
        # pass_form = PasswordChangeForm(req.user, data=req.POST)
        pass_form = SetPasswordForm(req.user, data=req.POST)
        if pass_form.is_valid():
            pass_form.save()
            update_session_auth_hash(req, pass_form.user)
            messages.success(req, 'Password Updated Successfully!')
            return redirect('profile')
    # pass_form = PasswordChangeForm(user=req.user)    
    pass_form = SetPasswordForm(user=req.user)    
    return render(req, 'form.html', {'form': pass_form, 'type':'Change Password'})

