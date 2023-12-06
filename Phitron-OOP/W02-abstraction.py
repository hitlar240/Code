# Abstract Base Class 
from abc import ABC, abstractmethod

""" 
Abstract method: 
    method that has a declaration 
    but does not have an implementation

Abstract class: 
    contains one or more abstract methods
    blueprint for other child classes
    enforce all derived class to have abstruct method
    prevent a user from creating an object of abstruct class
    
 """
class Animal(ABC): # parent class

    def __init__(self):
        super().__init__()

    @abstractmethod # decorator
    def eat(self):
        # print('khida lagse...')
        raise NotImplementedError

    @abstractmethod # enforce all derived class to have a eat method
    def move(self):
        # print('douRUN... ')
        raise NotImplementedError


class Monkey(Animal): # derived class
    def __init__(self, name):
        self.name = name
        super().__init__()
    # must have to define 'eat', 'move' methods
    def eat(self,food):
        self.food = food
        print(f'{self.name} is eating {self.food}')

    def move(self,where):
        self.where = where
        print(f'{self.name} is hanging on the {self.where}')

class Dog(Animal):
    def __init__(self,name):
        self.name = name 
        super().__init__()

    def eat(self,food):
        self.food = food
        print(f'{self.name} is eating {self.food}')

    # def move(self,where):
    #     self.where = where
    #     print(f'{self.name} is seating on the {self.where}')

# ani = Animal() 
# Can't instantiate abstract class Animal with abstract methods eat, move

monty = Monkey("bandor")
monty.eat('banana')
monty.move('bamboo')

dog = Dog('tommy')
dog.eat('meat')
dog.move('floor')