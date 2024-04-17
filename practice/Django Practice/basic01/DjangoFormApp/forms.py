from django import forms

class UserForm(forms.Form):
    roll = forms.IntegerField(label='Class Roll')
    name = forms.CharField(max_length=20, required=False, widget=forms.TextInput(attrs={'class':'form-control'}))
    email = forms.EmailField()
    adderss = forms.CharField(widget=forms.Textarea(attrs={'class':'form-control'}))