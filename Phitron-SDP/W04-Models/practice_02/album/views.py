from django.shortcuts import render, redirect
from album import forms,models

# Create your views here.
def home(req):
    if req.method == "POST":
        album_form = forms.AlbumForm(req.POST)
        if album_form.is_valid():
            album_form.save()
            print(album_form)
            return redirect('album_home')
        
    album_form = forms.AlbumForm()
    return render(req, 'album/index.html', {'form':album_form})

def edit_album(req, id):
    album = models.AlbumModel.objects.get(pk=id)
    album_form = forms.AlbumForm(instance=album)
    if req.method == "POST":
        album_form = forms.AlbumForm(req.POST, instance=album)
        if album_form.is_valid():
            album_form.save()
            return redirect('home')
    return render(req, 'album/index.html', {'form': album_form})

def delete_album(req, id):
    album = models.AlbumModel.objects.get(pk=id)
    album.delete()
    return redirect('home')