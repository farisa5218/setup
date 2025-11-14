def sum(*args):
    total =0
    for num in args:
        total +=num
    return total
result1=sum(1,2,3)
result2=sum(4,5,6,7,8)
print("The sum of first set is:", result1)
print("The sum of second set is:", result2)