from abc import ABC,abstractmethod

class Account(ABC):
    account_list = []

    def __init__(self,type,name,email,passward) -> None:
        self.type = type
        self.name = name
        self.email = email
        self.passward = passward
        self.account_no = None # -----------TODO: auto generate
        self.balance = 0 # initially

        Account.account_list.append(self)
        # can sort the account_list w.r.t type/name/id for search optimization

    def diposit(self,amount:int):
        if amount > 0:
            self.balance += amount
        else:
            print('\nInvalid amount\n')

    def withdraw(self,amount:int):
        if amount > 0 and amount <= self.balance:
            self.balance -= amount
        else:
            print('\nWithdrawal amount exceeded\n')

    @abstractmethod
    def show_info(self):
        raise NotImplementedError
    
    def change_info(self,name):
        self.name = name
    # method overloading
    def change_info(self,name,passward):
        self.name = name
        self.passward = passward


class SavingsAcc(Account):
    def __init__(self, name, email, passward, rate:int) -> None:
        super().__init__("Savings", name, email, passward)
        self.intereste_rate = rate

    def show_info(self):
        print(f'\nAccoutn Info:\
              \n    Type: {self.type}\
              \n    Name: {self.name}\
              \n    Account No: {self.account_no}\
              \n    Email: {self.email}\
              \n    Interest Rate: {self.intereste_rate}\
              \n    Balance: {self.balance}\n')

    def apply_intereste(self):
        self.balance += self.balance * self.intereste_rate / 100

class SpecialAcc(Account):
    def __init__(self, name, email, passward, limit:int) -> None:
        super().__init__("Special", name, email, passward)
        self.limit = limit

    def show_info(self):
        print(f'\nAccoutn Info:\
              \n    Type: {self.type}\
              \n    Name: {self.name}\
              \n    Account No: {self.account_no}\
              \n    Email: {self.email}\
              \n    Limit: {self.limit}\
              \n    Balance: {self.balance}\n')
    
    # method override
    def withdraw(self, amount: int):
        if amount > 0 and amount <= self.balance + self.limit:
            self.balance -= amount
        else:
            print('\nWithdrawal amount exceeded\n')

    def take_loan(self,amount:int):
        if amount > 0 and amount <= 100000:
            self.balance -= amount
        else:
            print("\nLoan Limit exceeded!\n")



