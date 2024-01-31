from django.db import models
# Create your models here.

class stu_form(models.Model):
    name = models.CharField(max_length=10)
