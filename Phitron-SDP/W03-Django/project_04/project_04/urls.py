from django.contrib import admin
from django.urls import path, include
from project_04 import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.index, name = "home"),
    path('app_01/', include('app_01.urls'))
]
