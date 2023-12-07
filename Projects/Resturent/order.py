from customer import * #Customer

class Order:
    def __init__(self,customer, food, quantity:int) -> None:
        self.customer = customer # Customer object
        self.food = food # food item
        self.quantity = quantity
        self.bill = food.price * quantity

    def __repr__(self):
        return f'\nCustomer:{self.customer.name} Order:{self.food.name} Price:{self.food.price} Quantity:{self.quantity}'# \nBill:{self.bill}/='