from django.urls import path
from profiles import views

urlpatterns = [
    path('',views.home, name='profiles_home')
]
