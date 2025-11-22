a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

oprtr = input("Choose the operation\n1: Sum     2: Subtract (a from b)     3: Multiply")

if oprtr == '1':
    print(a + b)
elif oprtr == '2':
    print(a - b)
elif oprtr == '3':
    print(a * b)
else:
    print("Invalid Input")
