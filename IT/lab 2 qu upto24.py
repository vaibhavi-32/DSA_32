import numpy as np
import pandas as pd
ar1 =  np.array([1,2,3,4])
ar2 =  np.array([10,20,30,40])
ar3 =  np.array([-23,-43,67,90])
DF = pd.DataFrame([ar1,ar2])
print(DF)

import numpy as np
import pandas as pd
ar1 =  np.array([1,2,3,4])
ar2 =  np.array([10,20,30,40])
ar3 =  np.array([-23,-43,67,90])
DF = pd.DataFrame([ar1,ar2,ar3])
print(DF)


import pandas as pd
df= pd.DataFrame([{'Ram':25,'Anil':29,'Simple':28},{'Ram':21,'Anil':25,'Simple':23},{'Ram':23,'Anil':18,'Simple':26}],index=['R1','R2','R3'])
print(df)
df['Amit']=[18,22,25]
print(df)
df['Parth']=[28,12,30]
print(df)


import pandas as pd
df= pd.DataFrame([{'Ram':25,'Anil':29,'Simple':28},{'Ram':21,'Anil':25,'Simple':23},{'Ram':23,'Anil':18,'Simple':26}],index=['R1','R2','R3'])
print(df)
df['Amit']=[18,22,25]#fixed error
print(df)



import pandas as pd
df= pd.DataFrame([{'Ram':25,'Anil':29,'Simple':28},{'Ram':21,'Anil':25,'Simple':23},{'Ram':23,'Anil':18,'Simple':26}],index=['R1','R2','R3'])
print(df)
df.loc['R4']=[12,22,10]
print(df)


import pandas as pd
df= pd.DataFrame([{'Ram':25,'Anil':29,'Simple':28},{'Ram':21,'Anil':25,'Simple':23},{'Ram':23,'Anil':18,'Simple':26}],index=['R1','R2','R3'])
print(df)
df.loc['R4']=[12,22,10]#fixed error
print(df)

import pandas as pd
df= pd.DataFrame([{'Ram':25,'Anil':29,'Simple':28},{'Ram':21,'Anil':25,'Simple':23},{'Ram':23,'Anil':18,'Simple':26}],index=['R1','R2','R3'])
print(df)
print("-------------------------------------")
df=df.drop('R2',axis = 0)
print(df)


import pandas as pd
df= pd.DataFrame([{'Ram':25,'Anil':29,'Simple':28},{'Ram':21,'Anil':25,'Simple':23},{'Ram':23,'Anil':18,'Simple':26}],index=['R1','R2','R3'])
print(df)
print("-------------------------------------")
df=df.drop(['R2','R1'],axis = 0)
print(df)

import pandas as pd
df= pd.DataFrame({'Ram':[25,21,23],'Anil':[29,25,18],'Simple':[28,23,26]},index=['R1','R2','R3'])
print(df.pop('Simple'))
print("-------------------------------------")
print(df)

import pandas as pd
df= pd.DataFrame({'Ram':[25,21,23],'Anil':[29,25,18],'Simple':[28,23,26]},index=['R1','R2','R3'])
print(df)
print("-------------------------------------")
df=df.drop('Simple',axis = 1)
print(df)


import pandas as pd
df= pd.DataFrame({'Ram':[25,21,23],'Anil':[29,25,18],'Simple':[28,23,26]},index=['R1','R2','R3'])
print(df)
print("-------------------------------------")
df=df.drop(['Simple','Ram'],axis = 1)
print(df)

import pandas as pd
df= pd.DataFrame([[25,21,23],[29,25,18],[28,23,26]],index=['R1','R2','R3'],columns=['Ram','Anil','Simple'])
print(df)
df=df.rename({'R1':'maths'})
print(df)


import pandas as pd
df= pd.DataFrame([[25,29,28],[21,25,23],[23,18,26]],index=['R1','R2','R3'],columns=['Ram','Anil','Simple'])
print(df)
df=df.rename({'R1':'Maths','R2':'Science','R3':'English'},axis='index')
print(".....................................")
print(df)

import pandas as pd
df= pd.DataFrame([[25,29,28],[21,25,23],[23,18,26]],index=['R1','R2','R3'],columns=['Ram','Anil','Simple'])
print(df)
df=df.rename({'Ram':'Ravi'},axis='columns')
print(".....................................")
print(df)

import pandas as pd
df= pd.DataFrame([[25,29,28],[21,25,23],[23,18,26]],index=['R1','R2','R3'],columns=['Ram','Anil','Simple'])
print(df)
df=df.rename({'Ram':'Ravi','Simple':'Yuvi'},axis='columns')
print(".....................................")
print(df)



import pandas as pd
df= pd.DataFrame([[25,29,28],[21,25,23],[23,18,26]],index=['R1','R2','R3'],columns=['Ram','Anil','Simple'])
print(df)
print(".....................................")
print(df.loc['R2'])

import pandas as pd
df= pd.DataFrame([[25,29,28],[21,25,23],[23,18,26]],index=['R1','R2','R3'],columns=['Ram','Anil','Simple'])
print(df)
print(".....................................")
print(df.loc[['R1','R3']])













