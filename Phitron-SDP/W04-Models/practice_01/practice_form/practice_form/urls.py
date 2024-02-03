from django.contrib import admin
from django.urls import path, include
from practice_form.views import home

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', home, name='home'),
    path('stu_form/', include('app_01.urls'), name='stu_form')
]
