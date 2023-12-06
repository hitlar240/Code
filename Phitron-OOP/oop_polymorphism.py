class Item:
    Shop = 'goriber dokan'
    item_list = []

    def __init__(self, name:str, price:float, quantity=1):
        self.__name = name 
        self.__price = price # private
        self.quantity = quantity
        Item.item_list.append(self)

    @property
    def price(self):
        return self.__price
   
    def discount_price(self):
        return self.__price * 0.8
    

    
# child class cannot access its parent class's private members directly
# Use getter to access parent class's private members
class Phone(Item):
    def __init__(self, name: str, price: float, quantity=1):
        super().__init__(name, price, quantity)

    def discount_price(self):
        return self.price * 0.7

class Laptop(Item):
    def __init__(self, name: str, price: float, quantity=1):
        super().__init__(name, price, quantity)

    def discount_price(self):
        return self.price * 0.5


# Polymorphism - many forms
phn = Phone('iPhn',1200)
lptp = Laptop('lenevo',1200)

print(phn.discount_price())
print(lptp.discount_price())


# function overloading
name = "Tanvir"
names = ["Tanvir",'Tom','al']
print(len(name)) # string length
print(len(names)) # number of elements in list 

# operator overloading
print(3 + 2)
print('tom' + 'al')
print([1,2,3] + [4,5])
print(3 * 2)
print('A' * 5)
