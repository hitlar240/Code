from django import forms 
from django.core import validators


# widgets: field to html
class contactForm(forms.Form):
    name = forms.CharField(label='User Name', initial='tom', help_text='max length 50 characters', required=False, disabled=False, widget= forms.Textarea({'id': 'text_area', 'class': 'class1 class2', 'placeholder': 'enter your name'}))
    email = forms.EmailField(label='User Email')
    # age = forms.IntegerField(label='User Age')
    age = forms.CharField(widget= forms.NumberInput)
    weight = forms.FloatField(label='User Weight')
    balance = forms.DecimalField(label='User Balance')
    # birthday = forms.DateField(label='User Birthday')
    birthday = forms.DateField(widget= forms.DateInput({'type': 'date'}))
    # appointment = forms.DateTimeField(label='User Appointment')
    appointment = forms.DateTimeField(widget= forms.DateInput({'type': 'datetime-local'}))
    CHOICES = [('S',"small"),('M',"medium"),('L',"large")]
    # size = forms.ChoiceField(choices = CHOICES)
    size = forms.ChoiceField(choices = CHOICES,widget=forms.RadioSelect)
    ITEMS = [('B',"beef"),('C',"chicken"),('V',"vegitables")]
    # food = forms.MultipleChoiceField(choices = ITEMS)
    food = forms.MultipleChoiceField(choices = ITEMS, widget= forms.CheckboxSelectMultiple)
    check = forms.BooleanField(label='User Check')
    # file = forms.FileField()  


# class studentData(forms.Form):
#     name = forms.CharField(widget= forms.TextInput)
#     email = forms.CharField(widget= forms.EmailInput)

#     # def clean_name(self):
#     #     valname = self.cleaned_data['name']
#     #     if len(valname) < 10:
#     #         raise forms.ValidationError('at least 10 characters')
#     #     return valname
    
#     # def clean_email(self):
#     #     valemail = self.cleaned_data['email']
#     #     if '@' and '.com' not in valemail:
#     #         raise forms.ValidationError("invalid email!")
#     #     return valemail
    
#     def clean(self):
#         cleaned_data = super().clean()
#         valname = self.cleaned_data['name']
#         valemail = self.cleaned_data['email']
#         if len(valname) < 10:
#             raise forms.ValidationError('at least 10 characters')
#         if '@' and '.com' not in valemail:
#             raise forms.ValidationError("invalid email!")
    

def len_check(txt):
    if len(txt) < 10:
        raise forms.ValidationError('at least 10 cahracters')
    

class studentData(forms.Form):
    name = forms.CharField(widget= forms.TextInput, validators=[validators.MinLengthValidator(10, message='at least 10 characters')])
    email = forms.CharField(widget= forms.EmailInput, validators=[validators.EmailValidator(message="invalid email!!!")])
    age = forms.IntegerField(validators=[validators.MinValueValidator(18, message='you are too young!!'), validators.MaxValueValidator(34, message='you are too old!!')])
    text = forms.CharField(widget=forms.TextInput, validators=[len_check])
    file = forms.FileField(validators=[validators.FileExtensionValidator(allowed_extensions=['pdf'], message='pdf only!!!')])

class passwardData(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    passward = forms.CharField(widget=forms.PasswordInput)
    confirm_passward = forms.CharField(widget=forms.PasswordInput)

    def clean(self):
        cleaned_data = super().clean()
        val_name = self.cleaned_data['name']
        val_pass = self.cleaned_data['passward']
        val_confirm_pass = self.cleaned_data['confirm_passward']
        if len(val_name) < 10: 
            raise forms.ValidationError('name must be at least 10 characters')
        if val_pass != val_confirm_pass:
            raise forms.ValidationError("passward doesn't match")
