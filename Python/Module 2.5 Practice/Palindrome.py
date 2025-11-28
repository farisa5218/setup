num=str(input("Enter a number: "))
number=num
num_rev = num[::-1]

if(num_rev[0]=='0'):
   num_rev=num_rev.lstrip('0')
print(num_rev)
if(num_rev==number):
    print("YES")
else:
    print("NO")
    
# https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I