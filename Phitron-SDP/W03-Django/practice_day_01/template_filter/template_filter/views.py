from django.shortcuts import render
import datetime

def home(req):
    data = {
        'name': 'tom al vai',
        'roll': 72,
        'age': 24,
        'courses': [
            {'id':1, 'title': 'CPP', 'fee': 1200},
            {'id':2, 'title': 'OOP', 'fee': 2500},
            {'id':3, 'title': 'DB', 'fee': 5000},
        ],
        'lst':['join','list','of','strings'],
        'today': datetime.datetime.now(),
    }
    return render(req, 'index.html', data)