def fuck(n):
    our_odd=1
    our_even=2
    for i in range(n-1):
        our_odd+=2
        our_even+=2
    t_e=3
    t_o=7
    i=1
    while(i<=n):
        
        s=bin(t_e)
        if(s.count('1')==2):
           
            i+=1
        if i!=n:
            
            t_e+=1
    i=0
    while(i<=n):
        
        s=bin(t_o)
        if(s.count('1')==3):
            
            i+=1
        if i==n:
            break
        t_o+=1
    print(our_odd,our_even)
    print(t_e,t_o)
    return (t_e+t_o)-(our_odd+our_even)   

n=int(input())
print(fuck(n))
