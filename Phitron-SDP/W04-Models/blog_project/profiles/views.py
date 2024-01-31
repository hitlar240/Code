from django.shortcuts import render,redirect
from profiles import forms

# Create your views here.
def home(req):
    if req.method == 'POST':
        profile_form = forms.ProfileForm(req.POST)
        if profile_form.is_valid:
            profile_form.save()
            return redirect('profiles_home')
    profile_form = forms.ProfileForm()
    return render(req, 'profiles/index.html', {'form': profile_form})