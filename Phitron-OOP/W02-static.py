# static attribute (class attribute) shared attribute among the instances
# self - instance


class Shop:
    name = 'goriber dokan' # class attribute | static attribute
    item = ['alu','potol','mula','begun'] # (common) shared attribute among the instances
    sold_item = []
    revenue = 0

    def __init__(self, name) -> None:
        self.name = name
        self.item = []

    @staticmethod
    def Total(a,b): # class|static method
        print(a+b)

    @classmethod
    def total(self,a,b): # instance method
        print(a+b)

    # @classmethod
    def purchase(self,what,price): # instance method
        self.item.append(what) # add to instace item 
        Shop.revenue += price # class revenue



fokir = Shop('tom')

Shop.Total(9,13)
# Shop.total(9,13)
# fokir.Total(3,6)
fokir.total(3,6)

print(fokir.name) # class
print(Shop.name) # # instance attribute

print(Shop.item)
print(fokir.item)

Shop.purchase(fokir,'aluu',12) # self = fokir
# fokir.purchase('aluu',12)
fokir.purchase('begun',23)
fokir.purchase('mula',7)
print(fokir.item)

print(Shop.item)

print(Shop.revenue)



miskin = Shop('Tanvir')
miskin.purchase('potol',17)
miskin.purchase('alu',12)
miskin.purchase('tomato',21)

print(Shop.item)
print(miskin.item)

print(Shop.revenue)
print(Shop.sold_item)


