""" def func( **kwargs):
  # print(f"apple: {kwargs['apple']}") 
   for key, value in kwargs.items():
    print(f'{key} : {value}')

result = func(apple = 5, orange= 4)
   """
   
   
def func( a, b, c):
  #return a, b, c # return as tuple (a, b, c)
 # return [a, b, c] #return as list [a, b, c]
  return {'a': a, 'b': b ,'c' : c} # return as dictionary

result = func(1, 2, 3)
print(result)
