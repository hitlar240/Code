from django.urls import path
from user import views

urlpatterns = [
    path('', views.user, name='user'),
    path('task/', views.task, name='task'),
    path('category/', views.category, name='category'),
    path('edit/<int:id>', views.edit_task, name='edit_task'),
    path('delete/<int:id>', views.delete_task, name='delete_task'),
]
