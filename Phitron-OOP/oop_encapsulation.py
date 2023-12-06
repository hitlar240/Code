class Item:
    Shop = 'goriber dokan'
    item_list = []

    def __init__(self, name:str, price:float, quantity=1):
        self.__name = name 
        self.__price = price # private
        self.quantity = quantity
        Item.item_list.append(self)
    
    # property decorator = Read-only attribute
    @property # getter - method to attribute
    def name(self):
        return self.__name
    
    @property
    def price(self):
        # print('getter')
        return self.__price
    
    @price.setter
    def price(self, val):
        # print('setter')
        if val < 0:
            raise Exception('price cannot be negative')
        else:
            self.__price = val

    def total_price(self):
        return self.__price * self.quantity
    
    def __repr__(self):
        return f"{self.__class__.__name__}('{self.name}', {self.price}, {self.quantity})"
  

phn = Item('Phone',1500,3)
# print(phn.__name) # private attribute cannot be accessed outside class
print(phn.name) # proprety
# phn.name = 'iPhone' # getter without setter is a Read-only attribute

# print(phn.__price) # private attribute cannot be accessed outside class
print(phn.price) # property

phn.price = 2000 # setter
print(phn.price) # property

print(phn.total_price())