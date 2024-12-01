n1=int(input("Enter number:"))
n2=int(input("Enter number:"))
if(n2>n1 or n2==0):
    print("n2 should be greater than 0:(")
    print("odd number") 
    for i in range(n1,n2) :
        if(i%2!=0):
            print(f"{i}")

        
    
