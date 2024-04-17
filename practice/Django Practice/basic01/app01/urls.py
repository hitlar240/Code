from django.urls import path
# from app01 import views
from . import views # from current folder

# http://127.0.0.1:8000/app01/...
urlpatterns = [
    path('', views.home, name='app01_home'), # app01 home page

# dynamic URL
    path('dynamic/', views.dynamic, name='dynamic'), # dynamic/id
    # path('dynamic/<int:id>', views.dynamic_raute, name='dynamic_raute'), # dynamic/id
    # path('dynamic/<str:id>', views.dynamic_raute, name='dynamic_raute'),
    # path('dynamic/<slug:id>', views.dynamic_raute, name='dynamic_raute'), # no (@, !, #, $, ...)
    path('dynamic/<id>', views.dynamic_raute, name='dynamic_raute'), # for any type 


]
