# finding sum of array by taking user's input of elements

def sum_of_array(arr):
    sum = 0
    for i in range(len(arr)):
        sum += arr[i]
    return sum

arr = []
n = int(input("Enter number of elements: "))
for i in range(n):
    arr.append(int(input("Enter element: ")))

print("Sum of array elements is: ", sum_of_array(arr))