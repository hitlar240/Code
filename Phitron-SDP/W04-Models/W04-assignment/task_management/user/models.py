from django.db import models

# Create your models here.
    
class CategoryModel(models.Model):
    name = models.CharField(max_length=50)

    def __str__(self):
        return self.name

class TaskModel(models.Model):
    title = models.CharField(max_length=50)
    description = models.TextField()
    category = models.ManyToManyField(CategoryModel)
    is_completed = models.BooleanField(default=False)
    assign_date = models.DateField()

    def __str__(self):
        return self.title
