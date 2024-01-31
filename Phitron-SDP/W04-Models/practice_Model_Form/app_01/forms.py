from django import forms
from app_01.models import stu_form

class stu_data(forms.ModelForm):
    class Meta:
        model = stu_form
        fields = ['name']