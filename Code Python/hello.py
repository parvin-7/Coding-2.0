print('hello')
x='alwar'
y='Bk'
print(x + y)

print(x[0:5])
a= 'COMPUTECH'
b = "ALWAR"
c = a + " " + b
print(c)
p = "COMPUTECH {}"
q=7
print(p.format(q)) # returns "COMPUTECH”


roll_no=int(input("Enter Roll Number : "))
student_name=input("Enter Student Name : ")
regular=bool(input("Enter True or False "))
obt_mark=float(input("Enter Obtained Marks / 500 : "))
per=obt_mark*100/500
if per>=50:
 Result="Pass"
else:
 Result="Fail"
if per>=70:
 g="A"
else:
 if per>=60:
  g="B"
 else:
  if per>=50:
   g="C"
  else:
   g="Nil"
  
  
roll="Roll Number : "
sn="Student Name : "
reg="Student :"
marks="Obtained Marks :"
p="Calculated Percentage : "
h="STUDENT`S RESULT"
RES="Result : "
gr="Grade :"
if regular:
 r='Regular'
else:
 r="Non-Regular"
print(h)
print(roll,roll_no)
print(sn,student_name)
print(marks,obt_mark)
print(p,per)
print(gr,g)
print(RES,Result)
print(reg,r)
i = 1
while i < 6:
 i+=1
 
 if i == 3:
  continue
  print(i)