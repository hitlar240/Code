from django import forms
from musicians import models

class MusicianForm(forms.ModelForm):
    class Meta:
        model = models.MusicianModel
        fields = '__all__'