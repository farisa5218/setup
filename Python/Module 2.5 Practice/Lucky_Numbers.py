a,b = map(int,input().split())

def lucky_number(n):
    for digit in str(n):
        if digit != '4' and digit != '7':
            return False
    return True

lucky = []

for i in range(a,b+1):
    if lucky_number(i):
        lucky.append(str(i))

if lucky:
    print(" ".join(lucky))
else:
    print(-1)

# https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M   