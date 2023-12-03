class Star_Cinema:
    hall_list = []

    @classmethod
    def entry_hall(cls,hall):
        cls.hall_list.append(hall)


class Hall(Star_Cinema):
    seats = {} # doctionary {key: value, ...}
    show_list = [] # list of tuples [(...,...,...),(,...)]
    def __init__(self, rows, cols, hall_no):
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        self.entry_hall(self)

    @classmethod
    def entry_show(cls, id, movie_name, time):
        # self.id = id
        # self.movie = movie_name
        # self.time = time
        cls.show_list.append((id,movie_name,time))


hall_01 = Hall(10,20,111)
hall_02 = Hall(20,20,123)
hall_03 = Hall(10,10,240)


Hall.entry_show('B101','Molla Barir Bou','04/12/23 at 3.00pm')
Hall.entry_show('E102','Spiderman','04/12/23 at 5.00pm')
Hall.entry_show('H103','PK','04/12/23 at 7.00pm')



print(hall_02.show_list)

for hall in Star_Cinema.hall_list:
    print(hall.hall_no)

