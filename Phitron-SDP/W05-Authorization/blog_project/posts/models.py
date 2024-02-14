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

    def __str__(self):
        return f'{self.title}'