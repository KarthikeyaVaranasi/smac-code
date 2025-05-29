import random
import matplotlib.pyplot as plt
results = {"Heads":0 , "Tails":0}
arr=[]
brr=[]
n = int(input("Enter number of trials"))
for i in range (n):
  toss = random.choice(['Heads','Tails'])
  results[toss]+=1
  brr.append(i+1)
  arr.append((results["Heads"])/(i+1))
print("No of Heads is",results['Heads'])
plt.axhline(y=0.5, color='gray', linestyle='--', linewidth=1, alpha=0.6)
plt.plot(brr,arr)
plt.xlabel("X-axis")
plt.ylabel("Y-axis")
plt.show()