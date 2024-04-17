from django.urls import path
from . import views


# http://127.0.0.1:8000/calculator/...
urlpatterns = [
    path('', views.calculator, name='calculator'),
    path('even-odd/', views.evod, name='evod'),
    path('marksheet/', views.marksheet, name='marksheet'),
]
