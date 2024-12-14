n_terms = int(input("Enter the number of terms: "))
t1, t2 = 0, 1
count = 0
if n_terms <= 0:
    print("Please enter a positive integer.")
elif n_terms == 1:
    print("Fibonacci sequence up to", n_terms, ":")
    print(t1)
else:
    print("Fibonacci sequence:")
    while count < n_terms:
        print(t1, end=', ')
        nth = t1 + t2
        t1 = t2
        t2 = nth
        count += 1
