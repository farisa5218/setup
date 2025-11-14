subjects = ["Bangla", "English", "Math", "Social", "Science", "Islam"]
marks = []

for subject in subjects:
    score = float(input(f"Enter marks for {subject}: "))
    marks.append(score)

total = sum(marks)
avg = total / 6

print(f"Total Marks: {total}")
print(f"Average Marks: {avg:.2f}")

if(avg>80 and avg<100):
    print("Abdur Rahman got CGPA-4")
elif(avg>75 and avg<79):
    print("Abdur Rahman got CGPA-3.75")
elif(avg>70 and avg<75):
    print("Abdur Rahman got CGPA-3.50")
elif(avg>65 and avg<70):
    print("Abdur Rahman got CGPA-3.25")
elif(avg>60 and avg<65):
    print("Abdur Rahman got CGPA-3.00")
elif(avg>55 and avg<60):
    print("Abdur Rahman got CGPA-2.75")
elif(avg>50 and avg<55):
    print("Abdur Rahman got CGPA-2.50")
elif(avg>45 and avg<50):
    print("Abdur Rahman got CGPA-2.25")
elif(avg>40 and avg<45):
    print("Abdur Rahman got CGPA-2.00")
else:
    print("Failed the semster")
    
