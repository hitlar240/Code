from django.shortcuts import render
from app_01.forms import stu_data

# Create your views here.
def show_form(req):
    form = stu_data() #object
    return render(req, 'stu_form.html', {'form': form})