meal_cost = float(input())

tip_percent = int(input())

tax_percent = int(input())
tip_percent = meal_cost*(tip_percent/100)
tax_percent = meal_cost*(tax_percent/100)
print(round(meal_cost+tax_percent+tip_percent))

