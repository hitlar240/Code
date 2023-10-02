# class Student:
#     # Attributes
#     name = "tom"
#     roll = 72
#     marks = [67.34, 55, 91.5, 44.4, 80]

#     # Methods
#     # def avrg(a,b,c,d,e):
#     def avrg(self, a,b,c,d,e): # self: ignore self
#         return (a+b+c+d+e)/5


# stu = Student()  # object

# print(Student)
# print(stu) # object location    
# print(stu.name)
# print(stu.roll)
# print(stu.marks)

# stu.fun()
# print(stu.avrg(5,5,5,5,5))





class Calculator:
    def add(self, a, b):
        return a+b
    
    def sub(self, a, b):
        return a-b
    
    def mul(self, a, b):
        return a*b
    
    def div(self, a, b):
        return a/b
    
    def mod(self, a, b):
        return a%b
    


cal = Calculator()

print(cal.add(5,3))
print(cal.sub(5,3))
print(cal.mul(5,3))
print(cal.div(5,3))
print(cal.mod(5,3))