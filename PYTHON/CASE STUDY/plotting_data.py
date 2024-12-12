import pandas as pd
import matplotlib.pyplot as plt

# Sample DataFrame
data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David'],
    'Sales': [250, 400, 300, 150]
}
df = pd.DataFrame(data)

print("Original DataFrame:")
print(df)

# Plotting Data
plt.figure(figsize=(8, 5))  # it defines the size of graph frame
plt.bar(df['Name'], df['Sales'], color='blue')   #Setting the bars and it's properties
plt.title('Sales by Name')  # title of the graph
plt.xlabel('Name')  # X-axis name
plt.ylabel('Sales')  # Y-axis name
plt.grid(axis='y', linestyle='--', alpha=0.7)  # giving the properties to graph
plt.show()  #for getting output of graph