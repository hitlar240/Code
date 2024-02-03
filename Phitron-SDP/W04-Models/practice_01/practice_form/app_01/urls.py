from django.urls import path,include
from app_01.views import show_form

urlpatterns = [
    path('', show_form)
]
