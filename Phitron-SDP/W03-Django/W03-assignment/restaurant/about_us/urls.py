from django.urls import path
from about_us import views

urlpatterns = [
    path('',views.index, name = 'about_us')
]
