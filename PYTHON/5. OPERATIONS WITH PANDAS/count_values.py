import pandas as pd

# Sample DataFrame
data = {
    'City': ['New York', 'Los Angeles', 'New York', 'Chicago', 'Los Angeles']
}
df = pd.DataFrame(data)

print("Original DataFrame:")
print(df)

# Counting Values
city_counts = df['City'].value_counts()
print("\nCount of occurrences for each city:")
print(city_counts)
