class Shop:

    cart = [] # calss attribute | shared within the class

    def __init__(self, name):
        name = 'hmm'
        self.name = name
        self.cart = []  # instance attrribute
    
    def add_to_cart(self,item):
        self.cart.append(item)

    def change_name(self):
        self.name = 'noo'


# Tom = Shop('tom')
# Tom.add_to_cart('egg')
# Tom.add_to_cart('biscut')

# print(Tom.name, Tom.cart)


Tanvir = Shop('tanvir')
Tanvir.add_to_cart('banana')
Tanvir.add_to_cart('apple')

print(Tanvir.name, Tanvir.cart)


print(Tanvir.name)
Tanvir.change_name()
print(Tanvir.name)