from django import forms
from user import models
import datetime

class TaskForm(forms.ModelForm):
    class Meta:
        model = models.TaskModel
        fields = "__all__"
        widgets = {
            'assign_date': forms.DateInput(attrs={'type': 'date'}),
            # 'assign_date': forms.DateField(initial=datetime.date.today),
        }

class CategoryForm(forms.ModelForm):
    class Meta:
        model = models.CategoryModel
        fields = "__all__"