from django.contrib import admin
from django.urls import path, include
from practice_02 import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home, name='home'),
    path('musician/', include('musicians.urls')),
    path('album/', include('album.urls')),
]
