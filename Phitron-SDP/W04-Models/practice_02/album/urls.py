from django.urls import path
from album import views

urlpatterns = [
    path('', views.home, name='album_home'),
    path('edit/<int:id>', views.edit_album, name='edit_album'),
    path('delete/<int:id>', views.delete_album, name='delete_album'),
]

