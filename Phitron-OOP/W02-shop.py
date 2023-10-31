class Shop:
    shop = 'DoKaN'
    def __init__(self, name):
        self.name = name
        self.cart = []  # instance attrribute
    
    def add_to_cart(self,item,price,quantity):
        # product = {'item':item, 'Prrice':price, "Quantity":quantity}
        # self.cart.append(product)
        self.cart.append({'item':item, 'Price':price, "Quantity":quantity})
    
    # def remove_item(self,item):
    #     for i in range(len(self.cart)):
    #         if self.cart[i]["item"] == item:
    #             del self.cart[i]

    def remove_item(self,item):
        for product in self.cart:
            if product["item"] == item:
                self.cart.remove(product)

    def total(self):
        total = 0
        for product in self.cart:
            total += product['Price'] * product['Quantity']
        return total

    def pay(self,amount):
        if amount < self.total():
            print(f'due {self.total()-amount}/=')
        elif amount > self.total():
            print(f'change {amount-self.total()}/=')
        else:
            print("Thank you!")





Tom = Shop('tom')
Tom.add_to_cart('egg',12.5,4)
Tom.add_to_cart('biscut',10,1)

print(Tom.name, Tom.cart,Tom.total())
Tom.pay(50)
# Tom.pay(500)

Tom.remove_item('biscut')
# Tom.remove_item('egg')
print(Tom.name, Tom.cart,Tom.total())
Tom.pay(50)









# Tanvir = Shop('tanvir')
# Tanvir.add_to_cart('banana',5,12)
# Tanvir.add_to_cart('apple',23,5)

# print(Tanvir.name, Tanvir.cart, Tanvir.total())
# Tanvir.pay(150)