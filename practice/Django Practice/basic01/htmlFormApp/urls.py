from django.urls import path
# from formApp import views
from . import views


# http://127.0.0.1:8000/HTML-form/...
urlpatterns = [
    path('', views.home, name='form_home'),
    path('get/', views.getForm, name='get_form'),
    path('post/', views.postForm, name='post_form'),
    path('redirect/', views.redirectPage, name='redirect_page'),
    path('action/', views.actionForm, name='action_form'),
]
