class Bus:
    def __init__(self,bus,id,location,destination) -> None:
        self.bus = bus
        self.id = id
        self.location = location
        self.destination = destination
        # self.seats = []

class User:
    def __init__(self,name,email,passward) -> None:
        self.name = name
        self.email = email
        self.passward = passward

class Admin: #(Bus,User):
    seats = {}
    bus_list = []
    passenger_list = []
    def __init__(self,name,email,passward) -> None:
        self.name = name
        self.email = email
        self.passward = passward
    
    def avaible_bus(self):
        print("---------------------------------------------")
        for bus in self.bus_list:
            print(f'Bus: {bus.bus}, id:{bus.id}, location: {bus.location}, destination: {bus.destination}')
    
    def registered_passengers(self):
            print("---------------------------------------------")
            for passenger in self.passenger_list:
                print(f'Name: {passenger.name}, Email:{passenger.email}, Passward: {passenger.passward}')

    def avaible_seats(self,id):
        for i in self.seats[id]:
            for j in i:
                print(j,end=" ")
            print()



admin = Admin("Ena",'tom','123')

while(True):
    print("-------------------------------")

    choise = input("admin/user? ")

    if choise == 'admin':

        while(True):
            print("1. Login")
            print("2. Exit")

            choise = int(input("Enter Option: "))
            if choise == 1:
                email = input("Enter Email: ")
                passward = input("Enter Passward: ")
                if email == admin.email and passward == admin.passward:
                    while(True):
                        print("---------------------------------------------")
                        print("1. Add Bus")
                        print("2. Avaible Bus")
                        print("3. Passenger List")
                        print("4. Logout")
                        choise = int(input("Enter Option: "))
                        if choise == 1:
                            bus = input("Enter Bus Name: ")
                            id = input("Enter Bus ID: ")
                            location = input("Enter Bus Location: ")
                            destination = input("Enter Bus Destination: ")
                            new_bus = Bus(bus,id,location,destination)
                            seats = []
                            for i in range(10):
                                seats.append(['A','A','A','A'])
                            admin.seats[id] = seats
                            admin.bus_list.append(new_bus)
                            print("Bus Added.")

                        elif choise == 2:
                            admin.avaible_bus()

                        elif choise == 3:
                            admin.registered_passengers()

                        else: 
                            break
                else:
                    print("Worng email or passward!!!")

            else: # Exit
                break

    elif choise == "user":
        while(True):
            print("1. Register")
            print("2. Login")
            print("3. Exit")

            choise = int(input("Enter Option: "))
            if choise == 1:
                name = input("Enter Name: ")
                email = input("Enter Email: ")
                passward = input("Set Passward: ")
                new_user = User(name,email,passward)
                admin.passenger_list.append(new_user)
                print("Regestered Successfully")

            elif choise == 2:
                email = input("Enter Email: ")
                passward = input("Enter Passward: ")
                flag = False
                for user in admin.passenger_list:
                    if user.email == email and user.passward == passward:
                        flag = True
                        print("Welcome ",user.name)

                        while(True):
                            print("---------------------------------------------")
                            print("1. Avaible Bus")
                            print("2. Avaible Seats")
                            print("3. Book seat")
                            print("4. Logout")

                            choise = int(input("Enter Option: "))

                            if choise == 1:
                                admin.avaible_bus()

                            elif choise == 2:
                                id = input("Enter Bus ID: ")
                                flg = False
                                for bus in admin.bus_list:
                                    if bus.id == id:
                                        flg = True
                                        # print("Bus: ",)
                                        admin.avaible_seats(id)
                                if flg == False:
                                    print("Invalid Bus ID!")

                            elif choise == 3:
                                id = input("Enter Bud ID: ")
                                flg = False
                                for bus in admin.bus_list:
                                    if bus.id == id:
                                        flg = True
                                        row = int(input("Row:"))
                                        column = int(input("Column:"))
                                        if admin.seats[id][row][column] == 'X':
                                            print("Sorry, Already Booked!")
                                        else:
                                            admin.seats[id][row][column] = 'X'
                                            print("Booked Successfully")

                                if flg == False:
                                    print("Invalid Bus ID!")

                            else:
                                break
                            
                if flag == False:
                    print("Worng email or passward!!!")

            else: 
                break
    else: 
        print("Invalid!")
