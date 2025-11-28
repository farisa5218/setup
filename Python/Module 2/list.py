#index=  0  1  2  3  4  5  6  7  8  9
number=[1 , 2, 3, 4, 5, 6, 7, 8, 9, 10]
#index=-10 -9 -8 -7 -6 -5 -4 -3 -2 -1
print("front word: ", number[3])
print("back word: ", number[-7])
print("range word: ", number[2:6])
print("range word 1: ", number[0:9:2])
print("range word 2: ", number[8:2:-1])
print("range word 3: ", number[:5])
print("range word 4: ", number[5:])
print("range word 5: ", number[:])
print("This is reverse: ", number[::-1])
print("This is length: ", len(number))
number[4]=50
print("Updated list: ", number)