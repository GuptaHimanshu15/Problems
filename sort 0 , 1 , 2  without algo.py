a=[2,0,1,2,1,0,1,0]
z,o,t=0,0,0
b=[]
for  i in range(len(a)) :
      if (a[i]==0):
          z=z+1
      if (a[i]==1):
          o=o+1      
      if (a[i]==2):
          t=t+1
          
#print(z,o,t)         
o=z+o
t=o+t
#print(z,o,t) 
m=0
for  m in range(len(a)) :
    if (m<z):
        b.append(0)
    if (m>=z and m < o):
          b.append(1)
    if (m>= o and m<t):
        b.append(2)
      
          
print(b)    