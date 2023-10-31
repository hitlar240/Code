class Student:

    section = "A"

    # constructor
    def __init__ (self, name, roll, marks):
        self.name = name
        self.roll = roll 
        self.marks = marks
        # pass # if void

    def avrg(self, a, b, c):
        return (a+b+c)/3


stu1 = Student('Tom',72, [35,54,77]) 
stu2 = Student('Abul',420, [53,48,67]) 
stu3 = Student('Tanvir',240, [66,59,88]) 

print(stu1.section)

print(stu1.name, stu1.roll, stu1.marks)
print(stu2.name, stu2.roll, stu2.marks)
print(stu3.name, stu3.roll, stu3.marks)

# print(stu.avrg([stu.marks]))