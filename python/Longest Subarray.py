Input = [3, 5, 8, 2, 19, 12, 7, 1133]
length = len(Input)

result = []
for i in range(length-2):
    for j in range(1,length-1):
        while nextele in Input:     
        temp = []
        first = Input[i]
        second = Input[j]
        nextele = first + second
        if nextele in Input:
            print('yes')
            temp.append(first)
            temp.append(second)
            temp.append(nextele)
            i = second
            j = nextele
        else:
            tempLen = len(temp)
            resultLen = len(result)
            # print(tempLen)
            # print(resultLen)
            if tempLen > resultLen:
                result = temp
                # print("yes")
                
                
            elif tempLen < resultLen:
                temp = []
            else:
                i = 0
                while(i != tempLen):
                    if temp[i] < result[i]:
                        result = temp
                        i = tempLen-1
                    else :
                        temp = []
                        i = tempLen-1
                    i+=1
print(result)\
