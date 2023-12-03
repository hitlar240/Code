# function is a first class object


# def do():
#     print('Started doing...')
#     def work():
#         print('working')
#         return 'work done'
#     return work

# print(do()) # do() returns function work
# print(do()()) # do()() = work()


def do(work):
    print('Started doing...')
    work()
    print('...stop doing\n')


def coding():
    print('coding in Python')

def fishing():
    print('catching fish')

def sleeping():
    print('sleeping ZZzzZz...')


do(coding)
do(fishing)
do(sleeping)
