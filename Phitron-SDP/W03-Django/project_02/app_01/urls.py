from django.shortcuts import render
from django.urls import path
# from app_01 import views
from . import views

urlpatterns = [
    path('',views.home)
]
