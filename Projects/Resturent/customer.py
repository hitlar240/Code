from restaurent import Restaurent
from menu import menu
from order import Order

class Customer:
    def __init__(self,name) -> None:
        self.name = name
        self.order = []
        self.bill = 0
    
    def order_food(self,type:str,food:str,quantity:int):
        item_list = []
        if type == 'burger':
            item_list = menu.burgers
        elif type == 'pizza':
            item_list = menu.pizzas
        elif type == 'snack':
            item_list = menu.snacks
        elif type == 'drink':
            item_list = menu.drinks
        else:
            print(f'Sorry, {type} is Not available!')
        
        item_found = False
        for item in item_list:
            if food == item.name:
                item_found = True
                my_order = Order(self,item,quantity) #add  to customer order
                self.order.append(my_order)
                Restaurent.add_order(my_order) # add ot returent orderlist
                self.bill += item.price * quantity
                print(my_order,'\nOrder Confirm\n')

        if not item_found:
            print(f'Sorry, {food} is Not available!')

    def cancel_order(self):
        pass

# c = Customer('tom')
# c.order_food('snack','Singara',5)