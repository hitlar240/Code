from django.urls import path
from app_01 import views

urlpatterns = [
    path('', views.stu_data, name='stu_data'),
]
