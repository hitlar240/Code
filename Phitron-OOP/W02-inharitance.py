# Inharitance provides "is a" relation

class Animal:
    def eat(self):
        print('it eats')
    def sleep(self):
        print('it sleeps')

# Dog is an Animal
class Dog(Animal):
    def bark(self):
        print('dog barks')
    def run(self):
        print("dog runs")
        
# Bird is an Animal
class Bird(Animal):
    def sing(self):
        print('bird sings')
    def fly(self):
        print("bird flies")

dog = Dog()
dog.bark()
dog.eat()
dog.run()
dog.sleep()

bird = Bird()
bird.sing()
bird.eat()
bird.fly()
bird.sleep()

