import pandas as pd
data = {'name': ['James', 'Emily', 'Michael'],
        'age': [25, 28, 32]}
df = pd.DataFrame(data, index=['id_1', 'id_2', 'id_3'])
print(df)

print("----------------------------------------")


import pandas as pd
data = {'name': ['James', 'Emily', 'Michael'],
        'age': [25, 28, 32]}
df['name'] = df['name'].replace('James', 'Suresh')
print(df)

print("----------------------------------------")


import pandas as pd
data = {'name': ['James', 'Emily', 'Michael'],
        'age': [25, 28, 32]}
df['city'] = ['Mumbai', 'Delhi', 'Bangalore']
print(df)

print("----------------------------------------")

import pandas as pd
data = {'name': ['James', 'Emily', 'Michael'],
        'age': [25, 28, 32]}
columns_list = df.columns.tolist()
print(columns_list)

print("----------------------------------------")


import pandas as pd
data = {'ID': [101, 102, 103], 'Name': ['James', 'Emily', 'John'], 'Age': [25, 30, 22]}
df = pd.DataFrame(data)
print("Default Index:")
print(df)
df_indexed = df.set_index('ID')
print("\nIndex set to 'ID':")
print(df_indexed)

print("----------------------------------------")


int_index = pd.Index([1001, 1002, 1003], dtype='int')
df_int = pd.DataFrame({'Name': ['Alice', 'Bob', 'Charlie']}, index=int_index)
print("64-bit Integer Index:")
print(df_int)

# Using floating-point numbers
float_index = pd.Index([1.1, 2.2, 3.3], dtype='float')
df_float = pd.DataFrame({'Score': [88.5, 92.3, 75.0]}, index=float_index)
print("\nFloating-point Index:")
print(df_float)

print("----------------------------------------")


series = pd.Series(['apple', 'banana', 'Cherry'])

print("Upper Case:")
print(series.str.upper())

print("\nLower Case:")
print(series.str.lower())

print("\nLength of Strings:")
print(series.str.len())

print("----------------------------------------")


text_series = pd.Series(['  hello  ', '  world', 'python  '])

print("All Whitespaces Removed:")
print(text_series.str.strip())

print("\nLeft Whitespaces Removed:")
print(text_series.str.lstrip())

print("\nRight Whitespaces Removed:")
print(text_series.str.rstrip())

print("----------------------------------------")


df1 = pd.DataFrame({'A': [1, 2], 'B': [3, 4]})
df2 = pd.DataFrame({'A': [5, 6], 'B': [7, 8]})

result = pd.concat([df1, df2], axis=0)
print(result)

print("----------------------------------------")

import pandas as pd
df = pd.DataFrame({'Name': ['Alice', 'Bob'], 'Age': [25, 30]})
new_data = [{'Name': 'Charlie', 'Age': 22}, {'Name': 'David', 'Age': 28}]
new_df = pd.DataFrame(new_data)
df_updated = pd.concat([df, new_df], ignore_index=True)
print(df_updated)

print("----------------------------------------")

df1 = pd.DataFrame({'ID': [1, 2, 3], 'Name': ['Amit', 'Sneha', 'Raj']})
df2 = pd.DataFrame({'ID': [2, 3, 4], 'Score': [90, 85, 88]})

merged = pd.merge(df1, df2, on='ID', how='inner')
print(merged)

print("----------------------------------------")


import pandas as pd
data = {
    'X': [78, 85, 96, 80, 86],
    'Y': [84, 94, 89, 83, 86],
    'Z': [86, 97, 96, 72, 83]
}
df = pd.DataFrame(data)
print(df)









