from django.urls import path
from . import views


urlpatterns = [
    path('', views.home, name='django_form_home'),
    path('user-form/', views.user_form, name='user_form')
]
