from django.urls import path
from app_01 import views

urlpatterns = [
    path('',views.index, name="home"),
    path('about/', views.about, name='about')
    # path('about/page/<int:id>', views.about, name='about')
]
