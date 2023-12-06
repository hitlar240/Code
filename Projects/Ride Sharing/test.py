from abc import ABC, abstractmethod
from datetime import datetime

class Ride_Sharing:
    def __init__(self, company_name) -> None:
        self.company_name = company_name
        self.riders = []
        self.drivers = []
        self.rides = []

    def add_rider(self, rider):
        self.riders.append(rider)
    
    def add_driver(self, driver):
        self.drivers.append(driver)

    def __repr__(self) -> str:
        return f'{self.company_name} with riders: {len(self.riders)} and drivers: {len(self.drivers)}'

class User(ABC):
    def __init__(self, name, email, nid) -> None:
        self.name = name
        self.email = email
        # TODO: set user id dynamically 
        self.__id = 0
        self.__nid = nid
        self.wallet = 0
    
    @abstractmethod
    def display_profile(self):
        raise NotImplementedError
    

class Driver(User):
    def __init__(self, name, email, nid, current_location) -> None:
        super().__init__(name, email, nid)
        self.current_location = current_location
        self.wallet = 0
    
    def display_profile(self):
        print(f'Driver with name: {self.name} and email: {self.email}')

    def accept_ride(self, ride):
        ride.set_driver(self)

    def __repr__(self):
        return self.name

class Rider(User):
    def __init__(self, name, email, nid, current_location, initial_amount) -> None:
        self.current_ride = None
        self.wallet = initial_amount
        self.current_location = current_location
        super().__init__(name, email, nid)

    def display_profile(self):
        print(f'Rider: with name: {self.name} and email: {self.email}') 


    def request_ride(self, ride_sharing:Ride_Sharing, destination):
        if not self.current_ride:
            ride_request = Ride_Request(self, destination)
            ride = Ride_Matching(ride_sharing.drivers).find_driver(ride_request)
            print('got the ride, yay\n',ride)
            self.current_ride = ride

    def show_current_ride(self):
        print(self.current_ride)


class Ride:
    def __init__(self, start_location, end_location) -> None:
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None

    def set_driver(self, driver):
        self.driver = driver


    def __repr__(self) -> str:
        return f'Ride details. driver:{self.driver} Started: {self.start_location} to {self.end_location}'

class Ride_Request:
    def __init__(self, rider:Rider, end_location) -> None:
        self.rider = rider
        self.end_location = end_location


class Ride_Matching:
    def __init__(self, drivers:list) -> None:
        self.available_drivers = drivers
    
    def find_driver(self, ride_request:Ride_Request):
        if len(self.available_drivers) > 0:
            # TODO: find  the closest driver of the rider
            print('looking for a driver')
            driver = self.available_drivers[0]
            ride = Ride(ride_request.rider.current_location, ride_request.end_location)
            driver.accept_ride(ride)
            return ride




# check the class integration

niye_jao = Ride_Sharing('Niye Jao')
sakib = Rider("sakib Khan", 'sakib@khan.com', 1254, 'mohakhali', 1200)
niye_jao.add_rider(sakib)
kala_pakhi = Driver('Kala Pakhi', 'kala@sada.com', 5648, 'gulshan 1')
niye_jao.add_driver(kala_pakhi)
print(niye_jao)

# print(kala_pakhi)
sakib.request_ride(niye_jao, 'uttara')
# sakib.show_current_ride()