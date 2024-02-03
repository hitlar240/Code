from django.urls import path
from musicians import views

urlpatterns = [
    path('', views.home, name='musician_home'),
    path('edit/<int:id>', views.edit_music, name='edit_musician'),
    path('delete/<int:id>', views.delete_music, name='delete_musician'),
]
