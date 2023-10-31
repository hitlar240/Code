class Student:
    school = 'zoo'

    def __init__(self,stu,cls,id):
        self.stu = stu
        self.cls = cls
        self.id = id

    def __repr__(self) -> str: # representation
        return f'Student: {self.stu}, Class:{self.cls}, ID:{self.id}'

class Teacher:
    school = 'zoo'

    def __init__(self,tchr,sbj,id):
        self.tchr = tchr
        self.sbj = sbj
        self.id = id

    def __repr__(self) -> str: # representation
        return f'Teacher: {self.tchr}, Subject:{self.sbj}, ID:{self.id}'

class School:
    def __init__(self,scl):
        self.scl = scl
        self.teachers = []
        self.students = []

    def add_teacher(self,tchr,sbj):
        id = len(self.teachers) + 1
        teacher = Teacher(tchr,sbj,id)
        self.teachers.append(teacher)

    def admit_stu(self,stu,cls,fee):
        if fee == 5000:
            id = len(self.students) + 1
            self.students.append(Student(stu,cls,id))


    def __repr__(self) -> str:
        print("School: ", self.scl)
        print("---------Teachers---------")
        for t in self.teachers:
            print(t)
        print("---------Students---------")
        for s in self.students:
            print(s)
        return 'good bye!'



zoo = School("Zoo")
zoo.add_teacher("abul","Mathematics")
zoo.add_teacher("babul",'English')
zoo.add_teacher('Hitlar','Vugol')
# print(zoo.teachers)

zoo.admit_stu('tom',3,5000)
zoo.admit_stu('tanvir',3,5000)
zoo.admit_stu('brolox',3,500000)
zoo.admit_stu('goribz',3,50)
# print(zoo.students)

print(zoo)
