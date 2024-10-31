#Texas State Tax
tax = float(.0625)
#How much I make a month
make_a_month = 2100
#Declaring the total variable
total_expenditure_per_month = 0
#Subscriptions per month.
discord_nitro = 2.70 #101 yearly or 8.42 monthly
xbox_gamepass = 21.50
bjj = 175
icloud_storage = 3.00
audible = 8.50
nordvpn = 3.45
moviebox = 2.30
subscriptions = discord_nitro + bjj + icloud_storage + audible + nordvpn + moviebox + xbox_gamepass
#Expenses per month
rent_included_utilities = 800
food = 300
car_insurance = 198.59
gas = 60
#Adding monthly expenses
total_expenditure_per_month += subscriptions + food + car_insurance + gas + rent_included_utilities
#Adding Tax
expenditure_with_tax = total_expenditure_per_month * tax
total_expenditure_per_month += expenditure_with_tax
#calculating total monthly spent
expenditure = total_expenditure_per_month
#printing how much i made that month starting with october 2024, my spending and how much I should have savedf
print('How much I make:', make_a_month,'Spending:', expenditure,'Saving:', make_a_month - expenditure)
#Declaring new variables for weekley expenditure
food_spent = 48
car_insurance_spent = 198.59
print('how much money left for food:', food - food_spent, 'how much money left for car insurace:', car_insurance - car_insurance_spent, )
