# Generated by Django 5.0.1 on 2024-02-03 03:41

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='CourseModel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
            ],
        ),
        migrations.CreateModel(
            name='TeacherModel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
            ],
        ),
        migrations.CreateModel(
            name='StuModel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=20)),
                ('email', models.EmailField(max_length=254)),
                ('text', models.TextField()),
                ('date', models.DateField()),
                ('time', models.TimeField()),
                ('date_time', models.DateTimeField()),
                ('decimal', models.DecimalField(decimal_places=2, max_digits=5)),
                ('courses', models.ManyToManyField(to='app_01.coursemodel')),
                ('teacher', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='app_01.teachermodel')),
            ],
        ),
    ]