# num = int(input("Enter a number: "))
# num1= float(input("Enter a float number: "))
# num1=round(num1,2)
# num2=complex(input("Enter a complex number: "))
# print("Integer number is:", num**2)
# print("Float number is:", num1)
# print("Complex number is:", num2)

# t=int(input("Testcases: "))
# while(t>0):
#     num1=int(input("Enter the Number: "))
#     num2=int(input("Enter the Number: "))
#     num3=int(input("Enter the Number: "))

#     if (num1>num2) and (num1>num3):
#         print(num1,"is the largest number")
        
#     elif (num2>num3) and (num2>num1):
#         print(num2,"is the largest number")
        
#     else:
#         print(num3,"is the largest number") 
#     t-=1

# sum=0
# for i in range(1,6):
#     num=int(input())
#     sum+=num
# print("the total :",sum)

# a=[]
# sum=0
# for i in range(5):
#     num=int(input())
#     a.append(num)
#     sum+=num
# print(a)
# print(sum) array + sum


# how to find array index
# n=int(input())
# a=[]
# for i in range(n):
#     num=int(input())
#     a.append(num)
# print("Your Array:",a)

# Step 2: Find index of a number
# x = int(input("Enter number to find its index: "))
# if x in a:
#     index=a.index(x)
#     print("x index No:",index)
# else:
#     print("is not in the array")


# Loop odd number 39 to 60

# for i in range(39,60,2):
#         print(i)

for i in range(39,60):
    if(i%2==1):
        print(i)
