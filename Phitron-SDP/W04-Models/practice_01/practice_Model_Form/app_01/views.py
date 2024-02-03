from django.shortcuts import render, redirect
from app_01 import forms

# Create your views here.
def stu_data(req):
    if req.method == 'POST':
        form = forms.StuForm(req.POST)
        if form.is_valid():
            form.save()
            print(form)
            return redirect('stu_form')
        
    form = forms.StuForm()
    return render(req, 'stu_form.html', {'form': form})

def course_data(req):
    if req.method == 'POST':
        form = forms.CourseForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect('course_form')
        
    form = forms.CourseForm()
    return render(req, 'course_form.html', {'form': form})

def teacher_data(req):
    if req.method == 'POST':
        form = forms.TeacherForm(req.POST)
        if form.is_valid():
            form.save()
            return redirect('teacher_form')
    
    form = forms.TeacherForm()
    return render(req, 'teacher_form.html', {'form': form})