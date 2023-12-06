class Item:
    Shop = 'goriber dokan'
    item_list = []

    def __init__(self, name:str, price:float, quantity=1):
        self.__name = name 
        self.__price = price # private
        self.quantity = quantity
        Item.item_list.append(self)

    
    # private methods cannot be accessed outside class
    def __connect_phn_no(self,phn_no):
        return len(phn_no) == 11

    # private method
    def __sms_sent(self,sms):
        print(f'SMS:"{sms}" sent successfully')
    
    def send_sms_to(self,sms:str,phn_no:str):
        if self.__connect_phn_no(phn_no): # if true
            self.__sms_sent(sms)
        else:
            print('Invalid Phone no.!')

  

phn = Item('Phone',1500,3)

# Abstraction - abstract/hide unnecessary details from instances
# phn.__connect_phn_no('01912345678')
# phn.__sms_sent('hello')
phn.send_sms_to("hello",'01912345678')