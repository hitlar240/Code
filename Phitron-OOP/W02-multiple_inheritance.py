# Mulple Inheritance

class Air:
    def fly(self):
        print('it can fly')

class Land:
    def run(self):
        print('it can run')

class Water:
    def swim(self):
        print('it can swim')

class Frog(Water, Land):
    pass

class Chicken(Land, Air):
    pass

class Duck(Land, Water, Air):
    pass

frog = Frog()
frog.run()
frog.swim()

chicken = Chicken()
chicken.run()
chicken.fly()

duck = Duck()
duck.run()
duck.swim()
duck.fly()

