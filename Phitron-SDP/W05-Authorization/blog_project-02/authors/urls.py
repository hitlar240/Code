from django.urls import path
from authors import views
from django.contrib.auth.views import LogoutView

urlpatterns = [
    path('register/',views.register, name='register'),
    # path('login/', views.user_login, name='login'),
    path('login/', views.UserLogin.as_view(), name='login'),
    path('logout/', views.user_logout, name='logout'),
    # path('logout/', views.UserLogout.as_view(), name='logout'),
    # path('logout/', views.LogoutView.as_view(), name='logout'),
    path('profile/', views.profile, name='profile'),
    path('profile/edit/', views.edit_profile, name='edit_profile'),
    path('profile/password/', views.change_pass, name='change_password')
]
