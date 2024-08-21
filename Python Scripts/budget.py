#Texas State Tax
tax = float(.0625)
#How much I make a month
make_a_month = 2100
#Declaring the total variable
total_expenditure_per_month = 0
#Subscriptions per month.
discord_nitro = 2.70 #101 yearly or 8.42 monthly
bjj = 175
icloud_storage = 3.00
audible = 8.50
nordvpn = 3.45
moviebox = 2.30
#Expenses per month
food = 600
car_insurance = 198.59
gas = 60
#Adding monthly expenses
total_expenditure_per_month += discord_nitro + bjj + icloud_storage + audible + nordvpn + moviebox + food + car_insurance + gas
#Adding Tax
expenditure_with_tax = total_expenditure_per_month * tax
total_expenditure_per_month += expenditure_with_tax
#calculating total monthly spent
expenditure = total_expenditure_per_month
print('How much I make: ', make_a_month,'Saving: ', make_a_month - expenditure,'Spending: ', expenditure)