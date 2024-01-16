from django.contrib import admin
from django.urls import path, include
from practice_day_02 import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home),
    path('app/', include('app.urls'))
]
