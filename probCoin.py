import random
p = float(input("enter probability of heads"))
heads=0
n=int(input("enter number of flips"))
for i in range (n):
  if(random.random()<p):
    heads+=1
print("Number of heads obtained is",heads)
