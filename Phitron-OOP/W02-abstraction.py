# Abstract Base Class 
from abc import ABC, abstractmethod

class Animal(ABC):

    @abstractmethod # enforce all derived class to have a eat method
    def eat(self):
        print('khida lagse...')

    @abstractmethod
    def move(self):
        print('douRUN... ')

class Monkey(Animal):
    def __init__(self, name):
        self.name = name
        super().__init__()

    def eat(self,food):
        self.food = food
        print(f'{self.name} is eating {self.food}')

    def move(self,where):
        self.where = where
        print(f'{self.name} is hanging on {self.where}')

monty = Monkey("bandor")
monty.eat('banana')
monty.move('bamboo')