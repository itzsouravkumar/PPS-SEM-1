import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Sample dataset
data = {
    'Date': ['2024-12-01', '2024-12-02', '2024-12-03', '2024-12-04'],
    'Product_ID': [101, 102, 103, 101],
    'Store_ID': [1, 2, 1, 2],
    'Units_Sold': [5, np.nan, 4, 6],
    'Unit_Price': [20, 30, 25, 20]
}
df = pd.DataFrame(data)

# 1. Data Cleaning
print("Original DataFrame:")
print(df)
df['Units_Sold'] = df['Units_Sold'].fillna(0)  # Replace missing values with 0
print("\nDataFrame after handling missing values:")
print(df)

# Sample dataset
data = {
    'Date': ['2024-12-01', '2024-12-02', '2024-12-03', '2024-12-04'],
    'Product_ID': [101, 102, 103, 101],
    'Store_ID': [1, 2, 1, 2],
    'Units_Sold': [5, np.nan, 4, 6],
    'Unit_Price': [20, 30, 25, 20]
}
df = pd.DataFrame(data)

# 1. Data Cleaning
print("Original DataFrame:")
print(df)
df['Units_Sold'] = df['Units_Sold'].fillna(0)  # Replace missing values with 0
print("\nDataFrame after handling missing values:")
print(df)

# 2. Adding Revenue Column
df['Revenue'] = df['Units_Sold'] * df['Unit_Price']
print("\nDataFrame with Revenue column:")
print(df)

# 3. Grouping Data
grouped_data = df.groupby('Product_ID')[['Units_Sold', 'Revenue']].sum()
print("\nGrouped data by Product_ID:")
print(grouped_data)

# 4. Daily Sales Trend
df['Date'] = pd.to_datetime(df['Date'])
daily_sales = df.groupby('Date')['Units_Sold'].sum()
print("\nDaily Sales Trend:")
print(daily_sales)

# 5. Identifying Top-Performing Store
store_revenue = df.groupby('Store_ID')['Revenue'].sum()
top_store = store_revenue.idxmax()
top_revenue = store_revenue.max()
print("\nTop-Performing Store:")
print(f"Store ID: {top_store}, Total Revenue: {top_revenue}")

# 6. Visualizing Sales Trend
plt.figure(figsize=(8, 5))
plt.plot(daily_sales.index, daily_sales.values, marker='o', color='blue')
plt.title('Daily Sales Trend')
plt.xlabel('Date')
plt.ylabel('Units Sold')
plt.grid(True)
plt.show()