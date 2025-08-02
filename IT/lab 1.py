#prg to print series of vowels
import pandas as pd
vowels = pd.Series(['A', 'E', 'I', 'O', 'U'])
print(vowels)


#prg to print series of tuple
import pandas as pd
a = (11, 22, 33, 44, 55)
series = pd.Series(a)
print("Series created from the tuple:")
print(series)


#prg to create a series of character
import pandas as pd
name = input("Enter your name: ")
char_series = pd.Series(list(name))
print(char_series)

#prg to create a series of dictionary
import pandas as pd
D = {
    "Jan": 31, "Feb": 28, "March": 31, "April": 30,
    "May": 31, "June": 30, "July": 31, "Aug": 31,
    "Sep": 30, "Oct": 31, "Nov": 30, "Dec": 31
}
month_days = pd.Series(D)
print("Series showing number of days in each month:")
print(month_days)

#prg to create a series of dictionary
import pandas as pd
class_data = {
    6: 45,
    7: 40,
    8: 42,
    9: 38,
    10: 44
}
student_series = pd.Series(class_data)
print("Series showing number of students in each class:")
print(student_series)

#prg to modify series
import pandas as pd
data = {'A': 25000, 'B': 12000, 'C': 8000, 'D': 5000}
series = pd.Series(data)
series['D'] = 7000
print("Modified Series:")
print(series)

#prg
import pandas as pd
s = pd.Series([300, 1200, 1700, 100])
filtered_values = s[s > 200]
print("values greater than 2001:")
print(filtered_values)

