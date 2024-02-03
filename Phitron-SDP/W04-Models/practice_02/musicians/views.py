from django.shortcuts import render, redirect
from musicians import forms,models

# Create your views here.
def home(req):
    if req.method == 'POST':
        musician_form = forms.MusicianForm(req.POST)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('musician_home')

    musician_form = forms.MusicianForm()
    return render(req, 'musicians/index.html', {'form': musician_form})

def edit_music(req, id):
    musician = models.MusicianModel.objects.get(pk=id)
    musician_form = forms.MusicianForm(instance=musician)
    if req.method == 'POST':
        musician_form = forms.MusicianForm(req.POST, instance=musician)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('home')
    return render(req, 'musicians/index.html', {'form': musician_form})

def delete_music(req, id):
    musician = models.MusicianModel.objects.get(pk=id)
    musician.delete()
    return redirect('home')