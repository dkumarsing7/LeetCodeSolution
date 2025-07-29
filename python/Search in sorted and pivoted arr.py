a = [7,1,2,3,4,5,6]

st = 0
end = len(a)-1
target = 7
while st<=end:
    mid = st + (end-st)//2  
    if(a[mid] == target):
        print(mid)
        break
    if(a[st] <= a[mid]):
        if(a[st] <= target and target <= a[mid]):
            end = mid - 1
        else:
            st = mid + 1
    else:
        if(a[mid] <= target and target <= a[end]):
            st = mid + 1
        else:
            end = mid - 1
    