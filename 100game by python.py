sum=0
while sum<100:
    x=int(input("enter player1num : "))
    sum=sum+x
    if sum==100 :
        print ("the winner is player1")
        break
    y=int(input("enter player2num : "))
    sum=sum+y
    if sum==100 :
        print ("the winner is player2")    
        
    
