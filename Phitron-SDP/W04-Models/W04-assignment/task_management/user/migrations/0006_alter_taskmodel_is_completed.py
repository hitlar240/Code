# Generated by Django 5.0.1 on 2024-02-04 04:04

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('user', '0005_alter_taskmodel_is_completed'),
    ]

    operations = [
        migrations.AlterField(
            model_name='taskmodel',
            name='is_completed',
            field=models.BooleanField(default=True),
        ),
    ]