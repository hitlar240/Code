from django.urls import path
from app_01 import views

urlpatterns = [
    path('login/', views.user_login, name='login'),
    path('register/', views.register, name='register'),
    path('profile/', views.profile, name='profile'),
    path('logout/', views.user_logout, name='logout'),
    path('passchange/', views.pass_change, name='passchange'),
    path('changedata/', views.changedata, name='changedata'),
]
