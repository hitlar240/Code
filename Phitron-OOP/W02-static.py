# static attribute (class attribute) shared attribute among the instances
# self - instance
# cls - class
# instance attributes cannot be accessed in static method 
# class attributes can be accessed in instance method 

# @staticmethod - might or might not be related to the class 
# instancemethod - affect the instance | (slef) as parameter
# @classmethod - affect the actual class | (cls) as parameter


class Shop:
    Name = 'goriber dokan' # class attribute | static attribute
    item = ['ALU','POTOL','MULA','BEGUN'] # (common) shared attribute among the instances
    sold_item = []
    revenue = 0

    def __init__(self, name) -> None:
        self.name = name
        self.item = []

    # instance method
    def purchase(self,what,price): # instance method
        self.item.append(what) # add to instace item 
        Shop.revenue += price # class attribute (revenue)
        Shop.sold_item.append(what)

    @staticmethod
    def Total(*price): # class|static method
        # print(self.name) # no self parameter
        print('Total = ',sum(price))

    @classmethod
    def change_shop_name(cls, name):
        cls.Name = name




print('Shop Name: ',Shop.Name) # # instance attribute
print('Available Items: ',Shop.item)

fokir = Shop('tom')
print('Customer: ',fokir.name) # class

print(fokir.name+'\'s Cart: ',fokir.item)

Shop.purchase(fokir,'aluu',12) # self = fokir
# fokir.purchase('aluu',12)
fokir.purchase('begun',23)
fokir.purchase('mula',7)
print(fokir.name+'\'s Cart: ',fokir.item)

Shop.Total(12,23,7)
fokir.Total(12,23,7)

print('Total Revenue: ',Shop.revenue)



print('Available Items: ',Shop.item)

miskin = Shop('Tanvir')
miskin.purchase('potol',17)
miskin.purchase('alu',12)
miskin.purchase('tomato',21)

print(miskin.name+'\'s Cart: ',miskin.item)

miskin.Total(17,12,21)
Shop.Total(42,17,12,21)

print('Total Revenue: ',Shop.revenue)
print('Sold Items: ',Shop.sold_item)


# fokir.change_shop_name('abuler dukan') # cls = Shop
Shop.change_shop_name('abuler dukan')
print('Shop Name: ',Shop.Name)
