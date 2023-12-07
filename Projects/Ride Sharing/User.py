from abc import ABC, abstractmethod

class Company:
    def __init__(self, name) -> None:
        self.name = name
        self.rider_list = [] # list of object
        self.driver_list = [] # list of object
        self.rides = []

    def add_rider(self,rider):
        self.rider_list.append(rider)

    def add_driver(self,driver):
        self.driver_list.append(driver)

    def __repr__(self) -> str:
        return f'{self.name} \nRider: {len(self.rider_list)} Driver: {len(self.driver_list)}'

class User(ABC): # parent class
    def __init__(self,name,email,phn):
        self.name = name 
        self.email = email
        self.phn_no = phn
        # TODO: dynamically
        self.id = None
        self.balance = 0
        self.rides = [] # list of Ride objs

    @abstractmethod
    def profile():
        raise NotImplementedError
    
    def ride_history(self):
        print(f'\n{self.name}\'s Ride Details:')
        for ride in self.rides:
            print(ride)
    
class Rider(User):
    def __init__(self, company:Company, name, email, phn, location):
        self.location = location 
        self.current_ride = None # Ride obj
        super().__init__(name, email, phn)
        company.add_rider(self)
    
    def profile(self):
        return f'Rider:{self.name} Phone No:{self.phn_no} Ride Count:{len(self.rides)}'

    def req_ride(self,company:Company, destination):
        print('Looking for Driver....')
        req = RideMatching(self,destination,company.driver_list)
        if req.has_driver():
            print(self.current_ride)
        else:
            print('Driver not found!')

    # def wallet(self):
    #     return self.balance

    # def load_wallet(self,amount):
    #     if amount > 0:
    #         self.wallet += amount

    def __repr__(self):
        return f'Rider:{self.name} Phn No:{self.phn_no}'

class Driver(User):
    def __init__(self, company:Company, name, email, phn, experiance):
        self.experiance = experiance
        super().__init__(name, email, phn)
        company.add_driver(self)

    def profile(self):
        return f'Driver:{self.name} Phone No:{self.phn_no} Ride Count:{len(self.rides)}'

    def wallet(self):
        return self.balance

    def __repr__(self):
        return f'Driver:{self.name} Phn No:{self.phn_no}'

class RideMatching:
    def __init__(self,rider:Rider,destination,drivers:list) -> None:
        self.destination = destination
        self.rider = rider
        self.drivers = drivers
    
    def has_driver(self):
        if len(self.drivers) == 0:
            return False
        else:
            ride = Ride(self.rider,self.drivers[0],self.rider.location,self.destination,)
            self.rider.current_ride = ride
            return True


class Ride:
    def __init__(self,rider:Rider,driver:Driver,location,destination) -> None:
        self.rider = rider
        self.driver = driver
        self.location = location
        self.destination = destination
        rider.rides.append(self)
        driver.rides.append(self)

    def __repr__(self) -> str:
        return f'Rider:{self.rider.name} Driver:{self.driver.name} From:{self.location} To:{self.destination}'


urao = Company("...Urao...")
# print(urao)

tom = Rider(urao,'Tom','abijabi@tmail.com',1745623,'JU')
don = Driver(urao,'Don','don@khan.com',4578636,2)

print(urao)
# for rider in urao.rider_list:
#     print(rider)

# for driver in urao.driver_list:
#     print(driver)

# print(tom.profile())
# print(don.profile()) 

# print('Balance: ', tom.wallet())
# print('Balance: ', don.wallet())

tom.req_ride(urao,'Dhaka')
tom.req_ride(urao,'Sylhet')

# print(tom.profile())
# print(don.profile()) 

tom.ride_history()
don.ride_history()