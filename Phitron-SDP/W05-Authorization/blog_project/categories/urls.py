from django.urls import path 
from categories import views

urlpatterns = [
    path('', views.home, name='categories_home')
]
