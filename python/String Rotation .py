def rotateLeft(string,num): 
    front = string[:num]
    back = string[num:]
    return back + front
def rotateRight(string,num): 
    front = string[:-num]
    back = string[-num:]
    return back + front

user = "rhdt:246, ghftd:1246"
dataset = user.split(',')
data = []
for ele in dataset:
    string, num = ele.strip().split(':')
    total_list = [int(x)**2 for x in num]
    total = 0
    for ele in total_list:
        total += ele
    if(total%2==0):
        print(rotateRight(string,1))
    else:
        print(rotateLeft(string,2))
        