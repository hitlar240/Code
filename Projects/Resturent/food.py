

class Food: # super class
    def __init__(self, name:str, price:int) -> None:
        self.__name = name # private
        self.__price = price # private
        
    @property
    def name(self):
        return self.__name
    @property
    def price(self):
        return self.__price
    
    def __repr__(self) -> str:
        return f'# {self.__class__.__name__}:{self.name} Price:{self.price}/='
    

# sub classes
class Burger(Food):
    def __init__(self, name: str, price: int, ingrdiants: list) -> None:
        self.__ingrdiants = ingrdiants # private
        super().__init__(name, price)
    
    def __repr__(self) -> str:
        return f'# {self.__class__.__name__}:{self.name} Price:{self.price}/= Ingradiants:{self.__ingrdiants}'
    
class Pizza(Food):
    def __init__(self, name: str, price: int, size:int, toppings: list) -> None:
        self.__size = size
        self.__toppings = toppings # private
        super().__init__(name, price)
    
    def __repr__(self) -> str:
        return f'# {self.__class__.__name__}:{self.name} Price:{self.price}/= Size:{self.__size}" Toppings:{self.__toppings}'
    
class Snak(Food):
    def __init__(self, name: str, price: int) -> None:
        super().__init__(name, price)
    
    # def __repr__(self) -> str:
    #     return f'# Name:{self.name} Price:{self.price}'


class Drink(Food):
    def __init__(self, name: str, price: int, quantity:int) -> None:
        self.__quantity = quantity
        super().__init__(name, price)

    def __repr__(self) -> str:
        return f'# {self.__class__.__name__}:{self.name} Price:{self.price}/= Quantity:{self.__quantity}ml'

    
