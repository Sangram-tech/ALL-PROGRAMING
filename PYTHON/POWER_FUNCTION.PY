def power(base, exponent):
    result = 1
    for _ in range(exponent):
        result *= base
    return result
base = float(input("Enter the base number: "))
exponent = int(input("Enter the exponent: "))
result = power(base, exponent)
print(f"{base} to the power of {exponent} is {result}")
