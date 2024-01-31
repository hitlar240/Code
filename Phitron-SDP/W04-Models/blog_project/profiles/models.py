from django.db import models
from authors.models import Author
# Create your models here.
class Profiles(models.Model):
    name = models.CharField(max_length=50)
    author = models.ForeignKey(Author, on_delete= models.CASCADE, default=None)
    about = models.TextField()

    def __str__(self):
        return self.name
    
