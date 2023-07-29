#Texas State Tax
tax = float(.0625)
#How much I make a month
make_a_month = 2100
#Declaring the total variable
total_expenditure_per_month = 0
#Subscriptions per month.
amazon_music = 0
discord_nitro = 0 #101 yearly or 8.42 monthly
gym = 0
icloud_storage = .99
audible = 18.10
nordvpn = 6.9525
macrofactor = 5.99
#Expenses per month
food = 300
car_insurance = 150
gas = 60
#Adding monthly expenses
total_expenditure_per_month += amazon_music + discord_nitro + gym + icloud_storage + audible + nordvpn + macrofactor + food + car_insurance + gas
#Adding Tax
expenditure_with_tax = total_expenditure_per_month * tax
total_expenditure_per_month += expenditure_with_tax
#calculating total monthly spent
expenditure = total_expenditure_per_month
print('How much I make: ', make_a_month,'Saving: ', make_a_month - expenditure,'Spending: ', expenditure)