

class Restaurent:
    name = 'Sei Shad'
    __order_list = []
    __revenue = 0

    def add_order(order):
        Restaurent.__order_list.append(order)

    def pay_bill(customer,amount:float):
        # for item in customer.order:
        #     print(item)

        if amount < customer.bill:
            print(f'Due: {customer.bill-amount}/=')
            customer.bill -= amount
        else:
            Restaurent.__revenue += customer.bill
            print(f'Change:{amount-customer.bill}')
            customer.bill = 0

