from django import forms
# from django.forms.widgets import NumberInput
import datetime

class stu_data(forms.Form):
    roll = forms.IntegerField()

    value = forms.DecimalField()

    # name = forms.CharField()
    name = forms.CharField(label='Enter Your Name')
    # name = forms.CharField(initial='Your Name')
    # name = forms.CharField(min_length=5, max_length=10)

    email = forms.EmailField() # required by default 
    # email = forms.EmailField(required=False)

    # address = forms.CharField(widget=forms.Textarea) # default 10 rows
    address = forms.CharField(widget=forms.Textarea(attrs={'rows': 3}))

    # date = forms.DateField()
    today = forms.DateField(initial=datetime.date.today)
    date = forms.DateField(widget=forms.widgets.NumberInput(attrs={'type': 'date'}))

    # year = forms.DateField(widget=forms.SelectDateWidget()) # default 10 years
    YEAR_CHOICE = ['2023','2024','2025']
    year = forms.DateField(widget=forms.SelectDateWidget(years=YEAR_CHOICE))

    # agree = forms.BooleanField()
    agree = forms.BooleanField(initial=True)

    COLOR_CHOICE = [
        ('r', "Red"),
        ('g', "Green"),
        ('b', "Blue"),
    ]
    # color = forms.ChoiceField(choices=COLOR_CHOICE)
    # color = forms.ChoiceField(choices=COLOR_CHOICE,widget=forms.RadioSelect)
    # color = forms.MultipleChoiceField(choices=COLOR_CHOICE)
    color = forms.MultipleChoiceField(choices=COLOR_CHOICE,widget=forms.CheckboxSelectMultiple)

