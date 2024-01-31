from django.urls import path
from app_01 import views

urlpatterns = [
    path('', views.home, name = "app"),
    path('form/', views.form, name = "form"),
    path('about/', views.about, name = "about"),
    path('django_form/', views.djangoForm, name = "django_form"),
    path('stu_form/', views.studentForm, name = "stu_form"),
    path('pass_form/', views.passwardValidation, name = "pass_form"),
]
