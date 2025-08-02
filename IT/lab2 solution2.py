import pandas as pd
import numpy as np
exam_data = {
    'name': ['Anastasia', 'Dima', 'Katherine', 'James', 'Emily',
             'Michael', 'Matthew', 'Laura', 'Kevin', 'Jonas'],
    'score': [12.5, 9, 16.5, np.nan, 9,
              20, 14.5, np.nan, 8, 19],
    'attempts': [1, 3, 2, 3, 2,
                 3, 1, 1, 2, 1],
    'qualify': ['yes', 'no', 'yes', 'no', 'no',
                'yes', 'yes', 'no', 'no', 'yes']
}
labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
df = pd.DataFrame(exam_data, index=labels)
print(df)

print("---------------------------------")

import pandas as pd
data= {'A':[1,2,3,4,5],
       'B':[5,6,7,8,9]}
df= pd.DataFrame(data)
print(df.head(3))

print("--------------------------------")

import pandas as pd
import numpy as np
exam_data = {
    'name': ['Anastasia', 'Dima', 'Katherine', 'James', 'Emily', 'Michael', 'Matthew', 'Laura', 'Kevin', 'Jonas'],
    'score': [12.5, 9, 16.5, np.nan, 9, 20, 14.5, np.nan, 8, 19],
}
labels = [1,2,3,4,5,6,7,8,9,10]
#labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
df = pd.DataFrame(exam_data, index=labels)
selected_columns = df[['name', 'score']]
print("Selected columns - 'name' and 'score':")
print(selected_columns)


print("--------------------------------")

import pandas as pd
import numpy as np
exam_data = {
    'name': ['Anastasia', 'Dima', 'Katherine', 'James', 'Emily',
             'Michael', 'Matthew', 'Laura', 'Kevin', 'Jonas'],
    'score': [12.5, 9, 16.5, np.nan, 9,
              20, 14.5, np.nan, 8, 19],
    'attempts': [1, 3, 2, 3, 2,
                 3, 1, 1, 2, 1],
    'qualify': ['yes', 'no', 'yes', 'no', 'no',
                'yes', 'yes', 'no', 'no', 'yes']
}
labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
df = pd.DataFrame(exam_data, index=labels)
selected_data = df.loc[['a', 'c', 'e'], ['name', 'score']]
print("Selected 'name' and 'score' columns from rows 'a', 'c', and 'e':")
print(selected_data)


print("---------------------------------")


import pandas as pd
import numpy as np
exam_data = {
    'name': ['Anastasia', 'Dima', 'Katherine', 'James', 'Emily',
             'Michael', 'Matthew', 'Laura', 'Kevin', 'Jonas'],
    'score': [12.5, 9, 16.5, np.nan, 9,
              20, 14.5, np.nan, 8, 19],
    'attempts': [1, 3, 2, 3, 2,
                 3, 1, 1, 2, 1],
}
labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
df = pd.DataFrame(exam_data, index=labels)
filtered_rows = df[df['attempts'] > 2]
print("Rows where number of attempts is greater than 2:")
print(filtered_rows)

print("---------------------------------")

import pandas as pd
import numpy as np
exam_data = {
    'name': ['Anastasia', 'Dima', 'Katherine', 'James', 'Emily',
             'Michael', 'Matthew', 'Laura', 'Kevin', 'Jonas'],
    'score': [12.5, 9, 16.5, np.nan, 9,
              20, 14.5, np.nan, 8, 19],
    'attempts': [1, 3, 2, 3, 2,
                 3, 1, 1, 2, 1],
}
labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
df = pd.DataFrame(exam_data, index=labels)
num_rows = df.shape[0]
num_columns = df.shape[1]
print(num_rows)
print(num_columns)

print("---------------------------------")

import pandas as pd
import numpy as np
exam_data = {
    'name': ['Anastasia', 'Dima', 'Katherine', 'James', 'Emily',
             'Michael', 'Matthew', 'Laura', 'Kevin', 'Jonas'],
    'score': [12.5, 9, 16.5, np.nan, 9,
              20, 14.5, np.nan, 8, 19],
    'attempts': [1, 3, 2, 3, 2,
                 3, 1, 1, 2, 1],
}
labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']
df = pd.DataFrame(exam_data, index=labels)
missing_score_rows = df[df['score'].isna()]
print(missing_score_rows)






