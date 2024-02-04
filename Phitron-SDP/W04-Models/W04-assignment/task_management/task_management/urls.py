from django.contrib import admin
from django.urls import path, include
from task_management import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home, name='home'),
    path('user/', include('user.urls'))
]
