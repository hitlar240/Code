from django import forms
from album import models

class AlbumForm(forms.ModelForm):
    class Meta:
        model = models.AlbumModel
        fields = '__all__'