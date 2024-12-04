# Taking input for the array size
n = int(input("Enter the number of elements in the array: "))

# Taking input for the array elements
arr = list(map(int, input("Enter the elements of the array: ").split()))

# Finding the maximum element
max_element = max(arr)

# Printing the result
print("The max element in the array is:", max_element)
