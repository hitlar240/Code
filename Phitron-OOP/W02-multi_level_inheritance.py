# base class | Super class | parent class | common attribute + functionality class
# derived class | Sub class | child class | uncommon attribute + functionality class

# Multi-level
# Base --> Derived --> Multi_Derived -->....


class Base:
    var = 100
    def fun(self):
        print('-----Base-----')

class Derived(Base):
    x = 240
    def hmm(self):
        print('oi dekha jay tal gach!')

class Multi(Derived):
    y = 72
    def mmh(self):
        print('oi amader gaa...')

a = Derived()
a.fun()
print(f'A = {a.var}, X = {a.x}')
a.hmm()

b = Multi()
b.fun()
print(f'B = {b.var}, X = {b.x}, Y = {b.y}')
b.hmm()
b.mmh()

""" --------------------------------------------------- """

""" 
class BaseClass:  # common
    def __init__(self, name, age) -> None:
        self.name = name 
        self.age = age

    def __repr__(self) -> str:
        return f'Name: {self.name} ------ Age: {self.age}\n\n'



class DerivedClass(BaseClass):  # inharitance
    def __init__(self, name, age, profession) -> None:
        self.profession = profession
        super().__init__(name, age) # from parent 'BaseClass'

    def method(self):
        print(f'Name: {self.name}, \nAge: {self.age}, \nProfession: {self.profession}')

    def __repr__(self) -> str:
        return super().__repr__()
    


class MultiDerived(DerivedClass):  # multi level inharitance
    def __init__(self, name, age, profession, salary) -> None:
        self.salary = salary
        super().__init__(name, age, profession) # from parent 'DerivedClass'

    def multi_method(self):
        self.method
        print(f'Name: {self.name}, \nAge: {self.age}, \nProfession: {self.profession} \nSalary: {self.salary}')

    def __repr__(self) -> str:
        return super().__repr__()




A = DerivedClass('tom', 23, 'bekar')
print(A)
A.method()

B = MultiDerived('Tanvir', 240, 'fokir', 1200)
print(B)
B.method()
B.multi_method()

 """