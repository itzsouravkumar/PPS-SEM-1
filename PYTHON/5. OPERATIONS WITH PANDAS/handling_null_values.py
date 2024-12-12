import pandas as pd

# Sample DataFrame with Null Values
data = {
    'Name': ['Alice', 'Bob', None, 'David'],
    'Age': [24, None, 22, 22],
    'City': ['New York', 'Los Angeles', None, 'Chicago']
}
df = pd.DataFrame(data)

print("Original DataFrame:")
print(df)

# Check for null values
print("\nCheck for null values:")
print(df.isnull())

# Drop rows with null values
print("\nDrop rows with null values:")
print(df.dropna())

# Fill null values with a default value
print("\nFill null values:")
df_filled = df.fillna({'Name': 'Unknown', 'Age': 0, 'City': 'Unknown'})
print(df_filled)
