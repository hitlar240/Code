"""
URL configuration for basic01 project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/5.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path, include # includes apps' urls
from basic01 import views

# http://127.0.0.1:8000/...
urlpatterns = [
    path('', views.home, name='home'),
    path('admin/', admin.site.urls),
    path('calculator/', include('calculator.urls')), # http://127.0.0.1:8000/calculator/...
    path('app01/', include('app01.urls')), # http://127.0.0.1:8000/app01/...
    path('app02/', include('app02.urls')), # http://127.0.0.1:8000/app02/...
    path('HTML-form/', include('htmlFormApp.urls')), # http://127.0.0.1:8000/HTML-form/...
    path('Django-form/', include('DjangoFormApp.urls')), # http://127.0.0.1:8000/Django-form/...
]
