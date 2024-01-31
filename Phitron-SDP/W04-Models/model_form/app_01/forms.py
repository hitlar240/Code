from django import forms
from app_01.models import studentModel

class studentForm(forms.ModelForm):
    class Meta:
        model = studentModel
        # fields = ['roll', 'name']
        # exclude = ['address']
        fields = '__all__'
        labels = {
            'roll': 'Student Roll',
            'name': 'Student Name',
            'address': 'Student Address',
        }
        widgets = {
            # 'name': forms.TextInput(attrs={'class': 'btn btn-primary'}),
            # 'roll': forms.PasswordInput()
        }
        help_texts = {
            'name': "write your name",
            'roll': "enter your roll"
        }
        error_messages = {
            'name': {'required': 'name is required'}
        }

