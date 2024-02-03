from django import forms
from app_01.models import StuModel, TeacherModel, CourseModel

class StuForm(forms.ModelForm):
    class Meta:
        model = StuModel
        fields = '__all__'

class TeacherForm(forms.ModelForm):
    class Meta:
        model = TeacherModel
        fields = '__all__'

class CourseForm(forms.ModelForm):
    class Meta:
        model = CourseModel
        fields = '__all__'