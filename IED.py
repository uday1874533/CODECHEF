# cook your dish here

a, b, c = map(int, input().split())

chef_sales = a * c
chefina_sales = b * c


max_sales = max(chef_sales, chefina_sales)


print(max_sales)
