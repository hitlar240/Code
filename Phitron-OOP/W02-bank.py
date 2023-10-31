class Bank:

    # bank = 'Islamic Bank'

    def __init__(self, name):
        self.name = name
        self.balance = 0
        self.min_withdrow = 10
        self.max_withdrow = 1000

    def diposit(self, amount):
        self.balance += amount
        print(f'your balance is {self.my_balance()}')

    def withdrow(self, amount):
        if amount > self.balance:
            print(f'eto {amount}/= nai tumar kase')
        elif amount < self.min_withdrow:
            print(f'Fokirni {amount}/= tula jabe na')
        elif amount > self.max_withdrow:
            print(f'bank fokir hoi jaibo {amount}/= tulle')
        else:
            self.balance -= amount
            print(f'your balance is {self.balance}')

    def my_balance(self):
        return self.balance
    


    
BRAC = Bank('tom')
print(BRAC.name, BRAC.my_balance())

# BRAC.diposit(5)
# print(BRAC.name, BRAC.my_balance())

# BRAC.diposit(50)
# print(BRAC.name, BRAC.my_balance())

BRAC.diposit(5000)
print(BRAC.name, BRAC.my_balance())


BRAC.withdrow(5)
BRAC.withdrow(2000)
BRAC.withdrow(100)

print(BRAC.name, BRAC.my_balance())
