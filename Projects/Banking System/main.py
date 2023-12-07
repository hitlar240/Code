from account  import * # all



user = None

while(True):
    if user == None: # user nai
        choise = input('\nLogin/Register: (L/R) \nExit: (press any other key)\
                       \nEnter: ').lower()
        if choise == 'r':
            typ = input('\nSavings/Special Account: (sv/sp) ')
            if typ != 'sv' and typ != 'sp':
                print('\nInvalid Account Type!\n')
                continue
            name = input("Name: ")
            email = input('Email: ')
            passward = input('Set Passward: ')
            if typ == 'sv':
                rate = int(input('Interest Rate: '))
                user = SavingsAcc(name,email,passward,rate)
                print('\nAccount Registration Successful\n')
            elif typ == 'sp':
                limit = int(input('Overdraft Limit: '))
                user = SpecialAcc(name,email,passward,limit)
                print('\nAccount Registration Successful\n')
        
        elif choise == 'l':
            if len(Account.account_list) == 0:
                print("\nNo Registered Account Yet!\n")
                continue
            name = input("User Name: ")
            passward = input("Passward: ")
            user_found = False
            for account in Account.account_list:
                if name == account.name and passward == account.passward:
                    user = account
                    user_found = True
                    break
            if not user_found:
                print('\nWrong Username or Passward!\n')
        
        else:
            break 
    else:
        # user ase
        print(f'\nWelcome {user.name},\n')
        print('1. Show Info')
        print("2. Diposit")      
        print("3. Withdraw")
        if user.type == "Savings":
            print("4. Apply Interest")
        elif user.type == "Special": #else
            print("4. Take Loan")
        print("5. Change Info")
        print("6. Logout")

        choise = input('\nEnter Option: ')
        if choise == '1':
            user.show_info()
        elif choise == '2':
            user.diposit(int(input('Enter Amount: ')))
        elif choise == '3':
            user.withdraw(int(input('Enter Amount: ')))
        elif choise == '4':
            if user.type == "Savings":
                user.apply_intereste()
            elif user.type == "Special": #else
                user.take_loan(int(input('Loan Amount: ')))
        elif choise == '5':
            name = input("Change Name: ")
            passward = input("Change Passward: ")
            user.change_info(name,passward)
        else:
            user = None
                