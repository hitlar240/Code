from restaurent import Restaurent
from menu import menu
from customer import Customer


print(f'\n-------------Welcome to {Restaurent.name} Restaurent-------------')
customer = Customer(input('\nCustomer Name: '))

while(True):
    print("\n1. Menu\n2. Order food\n3. Pay bill\n4. Exit\n")
    choise = int(input("Enter Option: "))
    if choise == 1:
        menu.show_menu()
    elif choise == 2:
        tYpe = input('Type: ')
        food = input("Food: ")
        quantity = int(input('Quantitiy: '))
        customer.order_food(tYpe,food,quantity)
    elif choise == 3:
        if len(customer.order) == 0:
            print('\nNo order yet!\n')
        else:
            print(customer.order)
            print(f'\nTotal bill = {customer.bill}/=\n')
            Restaurent.pay_bill(customer,int(input('Pay amount: ')))
    else:
        break

    