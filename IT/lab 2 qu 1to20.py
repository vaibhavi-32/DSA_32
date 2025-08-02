import pandas as pd
df = pd.DataFrame([11,22,33,44,55])
print(df)

import pandas as pd
df = pd.DataFrame([11,22,33,44,55], index=['R1','R2','R3','R4','R5'], columns=['C1'])
print(df)


import pandas as pd
df = pd.DataFrame([[21,'X','A'],[32,'IX','B'],[12,'XI','A'],[23,'X','A']])
print(df)


import pandas as ps
df = pd.DataFrame([[21,'X','A'],[32,'IX','B'],[23,'X','A'],[12,'XI','A']],index= ['Rec1','Rec2','Rec3','Rec4'],columns = ["Rno","Class","Sec"])
print(df)


import pandas as pd
df = pd.DataFrame({'Rno':[21,28,31],'Class':['IX','X','XI'],'Sec':['B','A','c']})
print(df)


import pandas as pd
df = pd.DataFrame({'B_id':['B1','B8','B5'],'Sub':['Hindi','Math','Science'],'Cost':[450,520,400]},index= ['R1','R2','R3'])
print(df)


import pandas as pd
df = pd.DataFrame([{'Ram':25,'Anil':29,'Simple':28},{'Ram':21,'Anil':25,'Simple':23},{'Ram':23,'Anil':18,'Simple':26}],index= ['Term1','Term2','Term3'])
print(df)


import pandas as pd
df = pd.DataFrame([{'Ram':25,'Anil':29,'Simple':28},{'Ram':21,'Anil':25,'Simple':23},{'Ram':23,'Anil':18}],index= ['Term1','Term2','Term3'])
print(df)


import pandas as pd
S1 = pd.Series([10,20,30,40])
S2 = pd.Series([11,22,33,44])
S3 = pd.Series([34,44,54,24])
df = pd.DataFrame(S1)
print(df)


import pandas as pd
S1 = pd.Series([10,20,30,40])
S2 = pd.Series([11,22,33,44])
S3 = pd.Series([34,44,54,24])
df = pd.DataFrame([S1,S2],index= ['R1','R2'])
print(df)


import pandas as pd
S1 = pd.Series([10,20,30,40])
S2 = pd.Series([11,22,33,44])
S3 = pd.Series([34,44,54,24])
df = pd.DataFrame([S1,S2,S3],index= ['R1','R2','R3'])
print(df)


import pandas as pd
S1 = pd.Series([10,20,30,40])
S2 = pd.Series([11,22,33,44])
S3 = pd.Series([34,44,54])
df = pd.DataFrame([S1,S2,S3],index= ['R1','R2','R3'])
print(df)




