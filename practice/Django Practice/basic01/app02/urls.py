from django.urls import path
from app02 import views 

# http://127.0.0.1:8000/app02/...
urlpatterns = [
    path('', views.home, name='app02_home'), # app02 home page
]
