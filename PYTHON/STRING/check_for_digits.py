s = input("Enter a string: ")
print("Contains Digits" if any(char.isdigit() for char in s) else "No Digits")
