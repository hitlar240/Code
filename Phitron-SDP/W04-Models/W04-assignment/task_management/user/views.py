from django.shortcuts import render, redirect
from user import forms,models

# Create your views here.
def user(req):
    tasks = models.TaskModel.objects.all()
    return render(req,'user.html', {'tasks':tasks})

def task(req):
    if req.method == 'POST':
        task_form = forms.TaskForm(req.POST)
        if task_form.is_valid():
            task_form.save()
            return redirect('task')
    task_form = forms.TaskForm()
    return render(req, 'task.html', {'form':task_form})

def edit_task(req, id):
    task = models.TaskModel.objects.get(pk=id)
    task_from = forms.TaskForm(instance=task)
    if req.method == 'POST':
        task_from = forms.TaskForm(req.POST, instance=task)
        if task_from.is_valid():
            task_from.save()
            return redirect('user')
    return render(req, 'task.html', {'form':task_from})

def delete_task(req, id):
    task = models.TaskModel.objects.get(pk=id)
    task.delete()
    return redirect('user')
        

def category(req):
    if req.method == "POST":
        category_form = forms.CategoryForm(req.POST)
        if category_form.is_valid():
            category_form.save()
            return redirect('category')
    category_form = forms.CategoryForm()
    return render(req, 'category.html', {'form':category_form})