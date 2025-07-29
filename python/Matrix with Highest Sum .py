import math
matrix = [6, 3, 6, 20, 3, 6,-15, 3, 3]
target = sum(matrix)
size = len(matrix)
max_order = int(math.sqrt(len(matrix)))-1

total = 0

def show(list, order):
    for ele in range(len(list)):
        if ele%order == 0 and ele != 0:
            print()
        print(list[ele], end=' ')
    print()
    print()
show(matrix, 3)
while(max_order != 1): 
    i=0
    while(i != size):
        subMatrix = matrix[i : i+(max_order*2)]
        if target == sum(subMatrix):
            show(subMatrix, max_order)
            # pass
            # print('yes')
        if(i == (size-(max_order*2))):
            i=size
        else:
            i+=1
    max_order-=1     
# show([1,2,3,4], 2)