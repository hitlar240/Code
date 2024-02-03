from django.db import models
# Create your models here.

class TeacherModel(models.Model):
    name = models.CharField(max_length=30)

    def __str__(self):
        return self.name
    
class CourseModel(models.Model):
    name = models.CharField(max_length=30)

    def __str__(self):
        return self.name

class StuModel(models.Model):
    name = models.CharField(max_length=20)
    email = models.EmailField(max_length=254)
    teacher = models.ForeignKey(TeacherModel, on_delete=models.CASCADE)
    courses = models.ManyToManyField(CourseModel)
    text = models.TextField()
    date = models.DateField()
    time = models.TimeField()
    date_time = models.DateTimeField()
    decimal = models.DecimalField(max_digits=5, decimal_places=2)