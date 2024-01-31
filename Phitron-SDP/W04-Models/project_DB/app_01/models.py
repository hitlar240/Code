from django.db import models

# Create your models here.
class student(models.Model):
    roll = models.IntegerField(primary_key = True)
    name = models.CharField(max_length = 20)
    address = models.TextField()
    fathers_name = models.TextField(default="none")

    def __str__(self):
        return f'{self.roll}-{self.name}'