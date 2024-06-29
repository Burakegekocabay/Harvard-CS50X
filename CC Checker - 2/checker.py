print()
cc_number = input("Enter Credit Card NUmber: ")
i = len(cc_number)
sum = 0
control = False
while i !=0 :
    if (control):
            if (ord(cc_number[i-1]) - ord("0") <5):
                sum= sum + 2*(ord(cc_number[i-1])-ord("0"))
            else:
                temp = 2*(ord(cc_number[i-1])-ord("0"))
                sum=sum+((int(temp/10))+(temp)%10)
            
    else:
        sum = sum+(ord(cc_number[i-1])-ord("0"))
    i-=1
    control= not control
    
    


if (sum%10==0):
    
    if((cc_number[0] == '2') or (cc_number[0] == '5')):
        print("VALID : MasterCard ")
        
    elif(cc_number[0] == '3'):
        print("VALID : American Express ")
        
    elif(cc_number[0] == '4'):
        print("VALID : Visa ")
        
    else:
        print("VALID")
        
        
    
else:
    print("Your CC is not valid.")

