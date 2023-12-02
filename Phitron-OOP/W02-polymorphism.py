from math import pi

class Shape:
    def __init__(self, name) -> None:
        self.name = name 

    def area(self):
        pass

class Square(Shape):
    def __init__(self, name, length) -> None:
        self.length = length
        super().__init__(name)

    def area(self):
        return self.length*self.length

class Circle(Shape):
    def __init__(self, name, radius) -> None:
        self.radius = radius
        super().__init__(name)

    def area(self):
        return pi*self.radius*self.radius
    
class Triangle(Shape):
    def __init__(self, name, base, hight) -> None:
        self.base = base
        self.hight = hight
        super().__init__(name)

    def area(self):
        return .5*self.base*self.hight
    
sq = Square('square',2)
cr  = Circle('circle',1)
tri = Triangle('triangle',2,5)

shape = [sq, cr, tri]
for x in shape:
    print('Area of'+x.name+' is ',x.area())