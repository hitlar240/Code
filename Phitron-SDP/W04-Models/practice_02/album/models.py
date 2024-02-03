from django.db import models
from musicians.models import MusicianModel

# Create your models here.
class AlbumModel(models.Model):
    name = models.CharField(max_length=50)
    musician = models.ForeignKey(MusicianModel, on_delete=models.CASCADE)
    release_date = models.DateField(auto_now_add=True)
    CHOICES = [
        ('1','1'),
        ('2','2'),
        ('3','3'),
        ('4','4'),
        ('5','5'),
    ]
    rating = models.CharField(max_length=10, choices=CHOICES)

    def __str__(self):
        return self.name