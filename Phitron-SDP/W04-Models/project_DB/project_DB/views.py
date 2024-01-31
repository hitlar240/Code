from django.shortcuts import render, redirect
from app_01 import models

def home(req):
    stu = models.student.objects.all()
    # print(stu)
    return render(req, 'home.html', {'data': stu})

def delete_stu(req, roll):
    st = models.student.objects.get(pk = roll).delete()
    print(st)
    # stu = models.student.objects.all()
    # return render(req, 'home.html', {'data': stu})
    return redirect('home')