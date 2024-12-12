import pandas as pd

# Sample DataFrame
data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David', None],
    'Age': [24, 27, None, 22, 28],
    'City': ['New York', 'Los Angeles', None, 'Chicago', 'New York']
}
df = pd.DataFrame(data)

print("Original DataFrame:")
print(df)

# Row and Column Selection
print("\nSelect specific columns (Name and City):")
print(df[['Name', 'City']])

print("\nSelect specific rows (2nd to 4th):")
print(df.iloc[1:4])  # Rows by index
