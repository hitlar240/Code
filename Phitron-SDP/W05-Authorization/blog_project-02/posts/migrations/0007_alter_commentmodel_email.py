# Generated by Django 5.0.1 on 2024-02-19 15:50

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('posts', '0006_commentmodel'),
    ]

    operations = [
        migrations.AlterField(
            model_name='commentmodel',
            name='email',
            field=models.EmailField(max_length=254, unique=True),
        ),
    ]