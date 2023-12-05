class Item:
    item_list = []
    Shop = 'goriber dokan'

    def __init__(self, name, price, quantity):
        self.name = name 
        self.price = price
        self.quantity = quantity
        Item.item_list.append(self)
    def total_price(self):
        return self.price * self.quantity
    
    def __repr__(self):
        return f"{self.__class__.__name__}('{self.name}', {self.price}, {self.quantity})"
    
class Phone(Item):
    def __init__(self, name, price, quantity, baterry, camera):
        self.beterry = baterry
        self.camera = camera
        # to access attributes/methods of super class 'Item'
        super().__init__(name, price, quantity) 

    # def call()


class Laptop(Item):
    def __init__(self, name, price, quantity, num_pad, ram):
        self.num_pad = num_pad
        self.ram = ram
        super().__init__(name, price, quantity)


item1 = Item('desk', 500, 1)
phn1 = Phone('phone',1000,2,5000,13)
lptp1 = Laptop('lptp',2000,1,False,8)

print(Item.item_list)