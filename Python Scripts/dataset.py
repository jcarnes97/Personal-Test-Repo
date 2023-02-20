import pandas as pd

df = pd.read_csv(r'/home/jcarnes/Documents/Conditions_Contributing_to_COVID-19_Deaths__by_State_and_Age__Provisional_2020-2023 (copy).csv')

mean1 = df['Age Group'].mean
mean2 = df['COVID-19 Deaths'].mean
print("Mean Age Group", mean1)
print("Mean COVID Deaths", mean2)