from django.db import models
from categories.models import Categories
from django.contrib.auth.models import User

# Create your models here.
class Posts(models.Model):
    title = models.CharField(max_length=100)
    content = models.TextField()
    category = models.ManyToManyField(Categories) # many to many relation
    author = models.ForeignKey(User, on_delete=models.CASCADE) # many to one relation
    # deletes all post of that author on profile deletion
    image = models.ImageField(upload_to='posts/upload/', blank=True, null=True)

    def __str__(self):
        return f'{self.title}'
    
class CommentModel(models.Model):
    post = models.ForeignKey(Posts, on_delete=models.CASCADE, related_name='comment')
    name = models.CharField(max_length=50)
    email = models.EmailField()
    body = models.TextField()
    created_time = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.name
