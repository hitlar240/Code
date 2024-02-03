from django.contrib import admin
from app_01.models import StuModel, TeacherModel, CourseModel

# Register your models here.
admin.site.register(StuModel)
admin.site.register(TeacherModel)
admin.site.register(CourseModel)