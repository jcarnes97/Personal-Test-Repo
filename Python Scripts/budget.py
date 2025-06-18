#Texas State Tax
tax = float(.0625)

#How much I make a month
make_a_month = 2400

#Declaring the total variable
total_expenditure_per_month = 0

#Subscriptions per month.
icloud_storage = 3.00
moviebox = 2.30
fitness_connection = 32.00
spotify = 12.98
#music = 450

#Adding subscriptions
subscriptions = icloud_storage + moviebox + fitness_connection + spotify

#Expenses per month
rent_included_utilities = 1000.00
renters_insurance = 16.42
food = 350
car_insurance = 176
gas = 100
internet = 65.60
electric = 130

#Adding monthly expenses
total_expenditure_per_month += subscriptions + rent_included_utilities + renters_insurance + food + car_insurance + gas + internet + electric

#calculating total monthly spent
expenditure = total_expenditure_per_month

#printing how much i made that month starting with october 2024, my spending and how much I should have savedf
print('How much I make:', make_a_month,'Spending:', expenditure,'Saving:', make_a_month - expenditure)

#Declaring new variables for weekley expenditure
#food_spent = 48
#car_insurance_spent = 198.59
#print('how much money left for food:', food - food_spent, 'how much money left for car insurace:', car_insurance - car_insurance_spent, )
