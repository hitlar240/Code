""" 
1. Menu
2. Order food
3. Pay bill
4. Exit
 """

from menu import menu

while(True):
    print("1. Menu\n2. Order food\n3. Pay bill\n4. Exit\n")
    choise = int(input("Enter Option: "))
    if choise == 1:
        menu.show_menu()
    elif choise == 2:
        pass
    elif choise == 3:
        pass
    else:
        break

    