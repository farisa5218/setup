#balance = 1000
# def func(): 
#     print("the" ,balance) # Accessible

# func()
# print("THE" ,balance) # Accessible

balance = 1000
def chk():
  global balance
  balance = balance - 500
chk()
print(balance)


