from django.shortcuts import render
import datetime
# Create your views here.

def home(req):

    d = {
        'name':'tom',
        'roll':72,
        'age':24,
        "courses": [ # array of dictionary
            {'id':1, 'course_name':'C++', 'fee':1200},
            {'id':2, 'course_name':'Python', 'fee':5000},
            {'id':3, 'course_name':'OOP', 'fee':2000},
        ],
        'lst':['join','list','of','strings'],
        'empty': '',
        'today': datetime.datetime.now(),
    } # passing data in dictionary form, from back-end to front-end

    return render(req, 'app_01/home.html', context=d)