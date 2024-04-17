from django.shortcuts import render

# Create your views here.
def home(req):
    data = { # pass data in dictionary format
        'title': 'App-02',
        'customer': 'tom',
        'items': ['apple', 'banana', 'orange'],
        'students': [
            {'roll':240, 'name':'Tom al', 'mark':76},
            {'roll':72, 'name':'Tanvir', 'mark':32.54},
            {'roll':111, 'name':'Abul', 'mark':-1},
            {'roll':99, 'name':'Babul', 'mark':85.35},
            {'roll':1, 'name':'Atel', 'mark':99.5},
        ]
    }
    return render(req, 'app02/index.html', data) # use the keys in the template