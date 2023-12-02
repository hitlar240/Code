class Persion:
    def __init__(self,name,age) -> None:
        self.name = name 
        self.age = age
        
    def eat(self):
        print("rice, polaw, gril, fast-food")

    def exercise(self):
        print('ghummm...zzZZzzZzzz...')
        raise NotImplementedError # force to override   


class Cricketer(Persion): # Inharitance
    def __init__(self, name, age, match, run) -> None:
        self.match = match
        self.run = run
        super().__init__(name, age)

# Method Override
    def eat(self):
        print('vagitables, egg, fruits')

    def exercise(self):
        print('DouRun...')
        

# Operator Overloading
    def __add__(self, other):
        return self.run + other.run
    
    def __mul__(self,other):
        return self.match *  other.match

    def __len__(self):
        return self.age
    
    def __gt__(self,other):
        return self.age > other.age



shak = Cricketer( 'Shakib',32,123,7000)
mushi = Cricketer('Mushfiq',34,112,6500)
shak.exercise()
# Operator
print(5 + 7)
print(len(shak.name))

# Operator Overloading
print([1,2,3] + [7,9]) # merge 2 lists
print('Shakib' + 'Mushfiq') # concatenate 2 strings

print(shak + mushi) # total run
print(shak * mushi) # shak's match * mushi's match
print(shak > mushi) # shak's age * mushi's age ?
print(len(shak)) # age