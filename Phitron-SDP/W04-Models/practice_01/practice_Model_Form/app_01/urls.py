from django.urls import path
from app_01 import views

urlpatterns = [
    path('student/', views.stu_data, name='stu_form'),
    path('teacher/', views.teacher_data, name='teacher_form'),
    path('course/', views.course_data, name='course_form'),
]
