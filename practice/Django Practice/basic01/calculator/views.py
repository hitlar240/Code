from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def calculator(req):
    data = {} # initially
    try:
        # get method by default
        if req.method == 'POST':
            num1 = eval(req.POST.get('val1')) # evaluate to int/float
            num2 = eval(req.POST['val2']) # evaluate to int/float
            opr = req.POST['opt']
            if opr == '+':
                ans = num1 + num2
            elif opr == "-":
                ans = num1 - num2
            elif opr == "*":
                ans = num1 * num2
            elif opr == "/":
                ans = num1 / num2
            elif opr == "%":
                ans = num1 % num2
            data = {
                'n1': num1,
                'op': opr,
                'n2': num2,
                'ans': ans
            }
    except:
        print('Calculation error!!')
    
    return render(req, 'calculator/calculator.html', data)

def evod(req):
    if req.method == 'POST':
        if int(req.POST.get('num'))%2 == 0:
            return HttpResponse('even')
        else:
            return HttpResponse('odd')
        
    return render(req, 'calculator/even_odd.html')

def marksheet(req):
    if req.method =="POST":
        m1 = eval(req.POST['sub1'])
        m2 = eval(req.POST['sub2'])
        m3 = eval(req.POST['sub3'])
        total = m1+m2+m3
        avg = total/3
        per = avg/20*100
        if per>=80 and per<=100:
            gpa = 4
            grade = 'A+'
        elif per>=75 and per<80:
            gpa = 3.75
            grade = 'A'
        elif per>=70 and per<75:
            gpa = 3.5
            grade = 'A-'
        elif per>=65 and per<70:
            gpa = 3.25
            grade = 'B+'
        elif per>=60 and per<65:
            gpa = 3
            grade = 'B'
        elif per>=55 and per<60:
            gpa = 2.75
            grade = 'B-'
        elif per>=50 and per<55:
            gpa = 2.5
            grade = 'C+'
        elif per>=45 and per<50:
            gpa = 2.25
            grade = 'C'
        elif per>=40 and per<45:
            gpa = 2
            grade = 'D'
        else:
            gpa = 0
            grade = 'F'
        data = {
            'm1': m1,
            'm2': m2,
            'm3': m3,
            "total": total,
            'avg': avg,
            'per': per,
            'gpa': gpa,
            'grade': grade
        }
        return render(req, 'calculator/marksheet.html', data)
    
    return render(req, 'calculator/marksheet.html')
