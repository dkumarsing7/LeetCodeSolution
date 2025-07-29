inStr = "5u6@n25g7#@"
# inStr = "t9@a42g&516 "
# outStr = 492561 
# outStr = 56527

special = '!@#$&' 
digit = '1234567890' 
even= []
odd= []
def checkSequence():
    count = 0
    for ele in inStr:
        if ele in special:
            count+=1
        elif ele in digit:
            if int(ele)%2==0:
                even.append(int(ele))
            else:
                odd.append(int(ele))
    if count%2==0:
        return True
    else:
        return False

if (checkSequence()):
    elen = len(even)
    olen = len(odd)
    maximum = max(elen, olen)
    i=0
    while( i != maximum):
        if i <= elen:
            print(even[i], end=' ')
        if i <= olen:
            print(odd[i], end=' ')
        i+=1
else:
    elen = len(even)
    olen = len(odd)
    maximum = max(elen, olen)
    i=0
    while( i != maximum):
        if i < olen:
            print(odd[i], end=' ')
        if i < elen:
            print(even[i], end=' ')
        i+=1