# TAKING INPUT FOR THE ARRAY SIZE
n = int(input("Enter the number of elements in the array: "))

# TAKING INPUT FOR THE ARRAY ELEMENTS
try:
    arr = list(map(int, input("Enter the elements of the array: ").split()))
    
    # VALIDATION: ENSURE THE NUMBER OF ELEMENTS MATCHES THE SPECIFIED SIZE
    if len(arr) != n:
        print(f"Error: Expected {n} elements, but got {len(arr)}.")
        exit()
except ValueError:
    print("Error: Please enter valid integers only.")
    exit()

# FINDING THE MAXIMUM ELEMENT
max_element = max(arr)

# PRINTING THE RESULT
print("The max element in the array is:", max_element)
