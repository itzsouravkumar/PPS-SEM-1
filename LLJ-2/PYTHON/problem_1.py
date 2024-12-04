# Taking the dimensions of the matrix
m = int(input("Enter the number of rows: "))
n = int(input("Enter the number of columns: "))

# Creating the matrices a and b based on user input
print("Enter the elements of the first matrix (a):")
a = []
for i in range(m):
    row = list(map(int, input().split()))  # Taking a row as input and converting it to integers
    a.append(row)

print("Enter the elements of the second matrix (b):")
b = []
for i in range(m):
    row = list(map(int, input().split()))  # Taking a row as input and converting it to integers
    b.append(row)

# Adding the matrices
res = [[0 for _ in range(n)] for _ in range(m)]  # Initialize a result matrix with zeros

for i in range(m):
    for j in range(n):
        res[i][j] = a[i][j] + b[i][j]

# Printing the result
print("The resulting matrix is:")
for row in res:
    print(" ".join(map(str, row)))
