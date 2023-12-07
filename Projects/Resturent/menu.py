from food import * #Burger,Pizza,Drink,Snak

class Menu:
    def __init__(self) -> None:
        self.burgers  = [] # list of Burger objects
        self.pizzas = [] # list of Pizza objects
        self.snacks = [] # list of Snak objects
        self.drinks = [] # list of Drink objects
    
    def add_item(self,item):
        if item.__class__.__name__ == 'Burger':
            self.burgers.append(item)
        elif item.__class__.__name__ == 'Pizza':
            self.pizzas.append(item)
        elif item.__class__.__name__ == 'Drink':
            self.drinks.append(item)
        else:
            self.snacks.append(item)

    def remove_item(self):
        pass

    def show_menu(self):
        print('\n----------------------------------Food-Menu----------------------------------\n')
        for item in menu.burgers:
            print(item)
        for item in menu.pizzas:
            print(item)
        for item in menu.snacks:
            print(item)
        for item in menu.drinks:
            print(item)
        print('\n-----------------------------------------------------------------------------\n')



menu = Menu()
menu.add_item(Burger('Chicken Burger', 150, ['Bun','Chicken','Letus']))
menu.add_item(Burger('Beef Burger', 250, ['Bun','Beef','Letus']))
menu.add_item(Pizza('Cheese Pizza', 200, 10, ['Cheese','Vegitables','Sauce']))
menu.add_item(Pizza('Chicken Cheese Pizza', 300, 12, ['Cheese','Chicken','Sauce']))
menu.add_item(Drink('Mojo',20,250))
menu.add_item(Drink('Clemon',25,250))
menu.add_item(Snak('Singara',10))
menu.add_item(Snak('Somucha',10))


# menu.show_menu()

        