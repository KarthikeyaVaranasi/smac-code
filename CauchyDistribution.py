import random 
import math
my_list=[]
y=int(input("Enter number of means to generate"))
mean_list=[]
n=int(input("Enter the number of samples you'd like to generate"))
for j in range (y):
  my_list=[]
  for i in range (n):
    x=random.random()
    my_list.append(math.tan(math.pi*(x-0.5))) 

  mean=(sum(my_list))/n
  mean_list.append(mean)
print (mean_list)

