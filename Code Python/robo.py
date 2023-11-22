import os

if __name__ == '__main__':
    print("Your welcome!")
    while(1):
       x = input("enter your name")
       command = f"say {x}"
       os.system(command)
       
