# instance - object of a class
# instance attribute - instance variable belongs to that instance (obj) only 
# class attribute - class variables belongs to the class (shared) 
# funtion - isolated def (definition)
# method - a function in a class
# self refers to instance
# python itself passes self = instance as the 1st parameter in a method implicitely
# to use Class.method(self,...) we have to pass (self) instance explicitely

# __init__ - constructor/initaliizer
# we can add more instance attributes

# instance attributes cannot be accessed from the class level
# we cannot access class attributes directly inside a method | use (Class.attribute)
# class attributes can be accessed from instances but cannot be modified for the class
# modification of a class attribute from instance level applies for that instance only | doesn't affect the class attribute

# f'...' - formated string

# @decorator
# @staticmethod - might or might not be related to the class 
# instancemethod - affect the instance | (slef) as parameter
# @classmethod - affect the actual class | (cls) as parameter

""" ------------------------------------------------------------------------------ """

class Item:
    # class attributes
    Shop = 'Goriber dokan'
    Discount = 0.2
    item_list = [] # list of all items (instances) | empty initially

    # def __init__(self, name, price, quantity): # initializer 
    def __init__(self, name: str, price: float, quantity = 0): # type validation
        # default value of quantity = 0

        # Run validations to the received arguments
        assert price >= 0 # , AssertionError: messege
        assert quantity >= 0, f'quantity {quantity} cannot be negative'

        # Assign to self object
        self.name = name # instance attribute
        self.price = price # dynamic attribute assignment
        self.quantity = quantity

        # Append instance that has been created
        Item.item_list.append(self) 
        
    # instance method
    def total_price(self):
        return self.price * self.quantity
    
    # instance method
    def discount_price(self): # cannot access class attribute directly
        # return self.price * (1- Item.Discount) # class attribute
        return self.price * (1- self.Discount) # instance attribute 
    
    @classmethod
    def change_shop_name(cls,name):
        cls.Shop = name
    
    # def change_shop_name(self,name):
    #     Item.Shop = name

    @staticmethod # similar as isolated function (degarless of instance or class)
    def is_even(num):
        return num%2 == 0


    # representation of instance
    def __repr__(self): 
        return f"Item('{self.name}', {self.price}, {self.quantity})" 



item1 = Item("phone", 100, 5) # instance of class 'Item'

# print(item1.total_price())

# print(Item.Shop) # class attribute
# print(item1.Shop) # accessed from inatance

# print(item1.name) # instance attribute
# # print(Item.neme) # cannot be accessed from class

# print(Item.__dict__) # all the attributes for class level
# print(item1.__dict__) # all the atibitues for instance level


item2 = Item('lptp', 1000)
item2.num_pad = True # adding instance attribute for this inatance only

# print(item2.num_pad) # item2 has num_pad attribute
# print(item1.num_pad) # item1 has no num_pad attribute

# print(item2.total_price())


# print(item1.discount_price()) # self passed implicitely
# print(Item.discount_price(item2)) # pass self explicitely

item2.Discount = 0.3 # applies for this inatanace only | doesn't affect the class attribute
# print(item2.Discount) # 30%
# print(Item.Discount) # 20%
# print(item1.Discount) # 20%

# print(item1.discount_price()) # 20%
# print(item2.discount_price()) # 30%


item3 = Item('Keyboard', 240, 1)
item4 = Item('Mouse', 150, 1)
item5 = Item('Desk',300,2)

# print(Item.item_list) # list of 5 instances
# for item in Item.item_list:
#     print(item.name)

# print(Item.is_even(3))
# print(item3.is_even(6))

print(Item.Shop)
Item.change_shop_name('Abuler dokan') # change the class attribute
item2.change_shop_name('Mofizer dokan') # change the class attribute
print(Item.Shop)
