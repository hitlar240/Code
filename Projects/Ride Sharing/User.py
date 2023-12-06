from abc import ABC, abstractmethod

class Company:
    def __init__(self, name) -> None:
        self.name = name
        self.rider_list = [] # list of object
        self.driver_list = [] # list of object

    def add_rider(self,rider):
        self.rider_list.append(rider)

    def add_driver(self,driver):
        self.driver_list.append(driver)

    def __repr__(self) -> str:
        return f'{self.name} Rider: {len(self.rider_list)} Driver: {len(self.driver_list)}'

class User(ABC): # parent class
    def __init__(self,name,email,phn):
        self.name = name 
        self.email = email
        self.phn_no = phn
        # TODO: dynamically
        self.id = None
        self.balance = 0

    @abstractmethod
    def profile():
        raise NotImplementedError
    
class Rider(User):
    def __init__(self, company:Company, name, email, phn, location):
        self.location = location 
        self.rides = []
        company.add_rider(self)
        super().__init__(name, email, phn)
    
    def profile(self):
        print(f'Rider:{self.name} Phone No: {self.phn_no}')

    def req_ride(self,location, destination):
        pass

    def ride_history(self):
        for ride in self.rides:
            print(ride)

    def wallet(self):
        return self.balance

    def load_wallet(self,amount):
        if amount > 0:
            self.wallet += amount

    def __repr__(self):
        return f'Rider:{self.name} Phn No:{self.phn_no}'


class Driver(User):
    def __init__(self, company:Company, name, email, phn, experiance):
        self.experiance = experiance
        company.add_driver(self)
        super().__init__(name, email, phn)

    def profile():
        pass

    def wallet(self):
        return self.balance

    def __repr__(self):
        return f'Driver:{self.name} Phn No:{self.phn_no}'


urao = Company("...Urao...")
print(urao)

tom = Rider(urao,'Tom','abijabi@tmail.com',123,'JU')
don = Driver(urao,'Don','don@khan.com',456,2)

print(urao)
for rider in urao.rider_list:
    print(rider)

for driver in urao.driver_list:
    print(driver)

print('Balance: ', tom.wallet())
print('Balance: ', don.wallet())