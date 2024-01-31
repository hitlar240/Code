from django.urls import path
from posts import views

urlpatterns = [
    path('',views.home, name='posts_home'),
    path('edit/<int:id>',views.edit_post, name='edit_post'),
    path('delete/<int:id>',views.delete_post, name='delete_post'),
]
