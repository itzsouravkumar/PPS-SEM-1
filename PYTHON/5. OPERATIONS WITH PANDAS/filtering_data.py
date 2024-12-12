import pandas as pd

# Sample DataFrame
data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David'],
    'Age': [24, 27, 22, 22],
    'Sales': [250, 400, 300, 150]
}
df = pd.DataFrame(data)
print("\nFilter rows where Sales > 200:")
filtered_df = df[df['Sales'] > 200]
print(filtered_df)


