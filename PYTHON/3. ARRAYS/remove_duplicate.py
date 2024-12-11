# removing duplicate and finnding unique elements in array by taking user's input of elements

def remove_duplicate(arr):
    arr = list(set(arr))
    return arr

arr = []
n = int(input("Enter number of elements: "))
for i in range(n):
    arr.append(int(input("Enter element: ")))

print("Unique elements in array are: ", remove_duplicate(arr))
