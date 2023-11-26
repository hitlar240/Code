# Encapsulation = 
# Access Modifier: public, prrotected, private

class Bank:
    def __init__(self, name, id, amount) -> None:
        self.name = name # public
        self._id = id # protected
        self.__balance = amount # private
    
    def dipo(self, amount):
        self.__balance += amount

    def withdraw(self, amount):
        if amount <= self.__balance:
            self.__balance -= amount
        else:
            print('forkir tk naiga...')

    def balance(self):
        return self.__balance


tom = Bank('tom', 24072, 5000)
# print(dir(tom))
print(tom.name)
print(tom._id)
# print(tom.__balance) # cannot be accessed out side class 'Bank'
print(tom._Bank__balance) # private value '__balance' in class 'Bank'
# print(tom.balance())

tom.dipo(1500)
print(tom.balance())

tom.withdraw(20000)
tom.withdraw(2000)
print(tom.balance())