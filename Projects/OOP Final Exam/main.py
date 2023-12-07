from bank import *


user = None

while True:
    if user == None: # user nai
        choise = input('\nLogin/Register ? (L/R) \nExit: (press any other key) \nEnter option: ').lower()
        if choise == 'r':
            option = input('\nUser/Admin ? (U/A) \nEnter option: ').lower()
            if option == 'u':
                typ = input('\nSavings/Current Account: (S/C) \nEnter option: ').lower()
                if typ != 's' and typ != 'c':
                    print('\nInvalid Account Type!\n')
                    continue
                name = input("Name: ")
                email = input('Email: ')
                address = input('Address: ')
                if typ == 's':
                    user = SavingsAccount(name,email,address)
                elif typ == 'c':
                    user = CurrnetAccount(name,email,address)
                print(f"\nAccount Registration Successful \nYour Account No is '{user.id}'\n")
            elif option == 'a':
                name = input("Name: ")
                email = input('Email: ')
                passward = input("Set Passward: ")
                user = Admin(name,email,passward)
                print("\nAdmin Registration Successful\n")
            else:
                print("\nInvalid option!\n")

        elif choise == 'l':
            option = input('\nUser/Admin ? (U/A) \nEnter option: ').lower()
            if option == 'u':
                if len(Bank.user_list) == 0:
                    print("\nNo Registered Account Yet!\n")
                    continue
                name = input("User Name: ")
                account_no = input("Account No: ")
                user_found = False
                for account in Bank.user_list:
                    if name == account.name and passward == account.id:
                        user = account
                        user_found = True
                        break
                if not user_found:
                    print('\nWrong Username or Account No.!\n')
            elif option == 'a':
                if len(Bank.admin_list) == 0:
                    print("\nNo Registered Admin Yet!\n")
                    continue
                name = input("User Name: ")
                passward = input("Passward: ")
                user_found = False
                for admin in Bank.admin_list:
                    if name == admin.name and passward == admin.passward:
                        user = admin
                        user_found = True
                        break
                if not user_found:
                    print('\nWrong Username or Passward!\n')
            else:
                print("\nInvalid option!\n")
        
        else:
            break # break while loop

    else: # user ase
        if user.type == "Admin":
            print(f'\nWelcome {user.name},\n')
            print('1. Delete Account')
            print("2. Show User List")      
            print("3. Show Bank Balance")
            print("4. Show Total Loan Amount")
            print("5. Manage Loan Feature")
            print("6. Logout")

            choise = input('\nEnter Option: ')
            if choise == '1':
                user.delete_account(input('Enter Account No: '))
            elif choise == '2':
                user.show_user_list()
            elif choise == '3':
                user.total_bank_balance()
            elif choise == '4':
                user.total_loan()
            elif choise == '5':
                user.is_loan_avaiable(int(input('\nLoan Feature [OFF/ON] ? (0/1): ')))
            else:
                user = None #logout
        
        else:
            print(f'\nWelcome {user.name},\n')
            print('1. Show Balance')
            print("2. Diposit")      
            print("3. Withdraw")
            print("4. Money Transfer")
            print("5. Show Transaction History")
            if user.type == "Savings":
                print("6. Logout")
            elif user.type == "Current": #else
                print("6. Take Loan")
                print("7. Logout")

            choise = input('\nEnter Option: ')
            if choise == '1':
                user.check_balance()
            elif choise == '2':
                user.diposit(int(input('Enter Amount: ')))
            elif choise == '3':
                user.withdraw(int(input('Enter Amount: ')))
            elif choise == '4':
                reciever_account_no = input('Reciever Account No: ')
                user.money_transfer(reciever_account_no,int(input('Enter Amount: ')))
            elif choise == '5':
                user.show_transaction_history()
            elif choise == '6':
                if user.type == "Savings":
                    user = None # Logout
                elif user.type == "Current": #else
                    user.take_loan(int(input('Enter Amount: ')))
            else:
                user = None # Logout



