# def name(first, last):
#     # return first + ' ' + last
#     return f'{first} {last}'

# # nm = name("tom", 'al') #parameter in order
# nm = name(last="tom", first='al')
# print(nm)


""" arguments with key """
def name(first, last, **kargs): 
    # print(kargs["title"])
    for key,val in kargs.items():
        print(key, val)
        # print(f'{key}: {val}')

nm = name("tom", 'al', title="Khan", rank='Boss')

#     # return kargs["title"] + ' ' + first + ' ' + last + ' ' + kargs['rank']
#     return f'{kargs["title"]} {first} {last} {kargs["rank"]}'

# # nm = name("tom", 'al') #parameter in order
# nm = name(last="tom", first='al', title='Khan', rank="Boss")
# print(nm)


# def name(first, last, *args, **kargs):
#     return f'{kargs["title"]} {first} {args} {last} {kargs["rank"]}'

# nm = name("tom", 'al', '72', '240', title="Khan", rank='Boss')
# print(nm)