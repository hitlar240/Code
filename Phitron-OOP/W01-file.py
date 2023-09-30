# for i in range(3):
#     with open(f'test_{i}.txt', 'w') as file:
#         file.write('oi dekha jay, tal gach\n') # create files at current location & write

with open(f'test.txt', 'w') as file:
    file.write('oi dekha jay, tal gach\n') # create files at current location & write

for i in range(10):
    with open('test.txt', 'a') as file:
        file.write('oi dekha jay, tal gach\n') # append 

with open('test.txt', 'r') as file:
    print(file.read()) # read