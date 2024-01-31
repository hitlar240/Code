from django.urls import path
from authors import views

urlpatterns = [
    path('',views.home, name='author_home')
]
