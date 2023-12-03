# getter --> get a value of a property through a method. Most of the time, you will get the value of a private attribute.
# setter --> set a value of a property through a method. Most of the time, you will set the value of a private property.
# read only --> you can not set the value. value can not be changed
# getter without any setter is a read only attribute


class User:
    def __init__(self,name,age,money) -> None:
        self.name = name # public
        self._age = age # protected
        self.__money = money # private
    
    # getter
    @property 
    def salary(self): # attribute
        return self.__money
    
    # setter
    @salary.setter
    def salary(self, money): # attribute
        self.__money = money


tom = User('Tom al', 23, 5000)
print(tom.name)
print(tom._age)
# print(tom.__money) # cannot be accessed outside class
# print(tom.salary()) # method
print(tom.salary) # attribute

tom.salary = 10000 # setter
print(tom.salary)