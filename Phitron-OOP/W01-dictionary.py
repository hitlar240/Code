""" Dictionary: key value pair  {key: value, ...}
                mutable
"""

id = {'Name': "Tom", "Age": 23, 'Address': "Islampur"}

print(id)
print(id["Name"])
id["Name"] = "Tanvir"
print(id.keys())
print(id.values())

id["Profession"] = "bekar"
del id["Address"]
print(id)

for key, val in id.items():
    print(key, val)