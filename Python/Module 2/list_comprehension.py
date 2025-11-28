num = [5,11,4,8,15,19,22,13,27,30]
# odds=[]
# for n in num:
#     if n%2!=0 and n % 5 == 0:
#         odds.append(n)
# print(odds)

odds =[n for n in num if n%2!=0  if n%5==0] #before condition is one line
print(odds)

players = ['sachin','dravid','ponting','lara','tendulkar','warne']
age = [42,45,48,38,41,50]
# young_players = []
# for i in range(len(players)):
#     if age[i]<45:
#         young_players.append(players[i])
# print(young_players)
young_players = [players[i] for i in range(len(players)) if age[i]<45]
print(young_players)
