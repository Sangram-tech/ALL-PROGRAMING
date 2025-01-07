my_set = {1, 2, 3, 4, 5}
my_set.add(6)
print("After adding 6:", my_set)
my_set.remove(3)
print("After removing 3:", my_set)
element = 4
if element in my_set:
    print(f"{element} exists in the set.")
else:
    print(f"{element} does not exist in the set.")
another_set = {4, 5, 6, 7, 8}
union_set = my_set.union(another_set)
print("Union of sets:", union_set)
intersection_set = my_set.intersection(another_set)
print("Intersection of sets:", intersection_set)
difference_set = my_set.difference(another_set)
print("Difference of sets:", difference_set)
