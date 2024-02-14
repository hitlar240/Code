from django.contrib import admin
from django.urls import path, include
from blog_project import views


urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home, name='home'),
    path('author/', include('authors.urls')),
    path('category/',include('categories.urls')),
    path('post/', include('posts.urls'))
]
