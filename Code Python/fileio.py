h = "2pac,sidhu,nipsey,biggie,snoop,dre,cube,eminem,cent,drake"
#context manager way
with open("legend.txt","w") as f:
    f.write(h)
    
#another way
#fp = open("legend.txt","w")
#fp.write(h)
#fp.close()

#reading to a file
with open("legend.txt","r") as b:
    h = b.read()
    print(h)
    
#adding more text to file
with open("legend.txt","a") as p:
    p.write(" Legends")
    
    
