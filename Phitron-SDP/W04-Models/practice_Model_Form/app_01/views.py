from django.shortcuts import render
from app_01.forms import stu_form

# Create your views here.
def stu_data(req):
    form = stu_form()
    return render(req, 'form.html', {'form': form})