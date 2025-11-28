# Example
# InputCopy
# 5
# 4 1 3 10 8
# OutputCopy
# 4 10 3 1 8 

n =int(input())
a = list(map(int,input().split()))
min_index = a.index(min(a))
max_index = a.index(max(a))
a[min_index],a[max_index] = a[max_index],a[min_index]
print(*a)

# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M