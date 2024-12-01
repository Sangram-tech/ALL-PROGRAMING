def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# Input from the user
num = int(input("Enter a number: "))

# Call the factorial function
result = factorial(num)

# Print the result
print(f"The factorial of {num} is {result}")
