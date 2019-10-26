arrLen1 = int(input())
arr1 = list(map(int,input().strip().split()))[:arrLen1]
arrLen2 = int(input())
arr2 = list(map(int,input().strip().split()))[:arrLen2]
newArray=dict()
for val in range(arrLen1): 
    if arr1[val] in newArray.keys(): 
        newArray[arr1[val]] += 1
    else:
        newArray[arr1[val]]=1
for val in range (arrLen2):
    res = newArray.get(arr2[val])
    if(res!=None):
        print(res,end=' ')
    else:
        print("Not Present",end=' ')

        
# Sample Input :
# 10
# 1 1 1 2 2 2 3 8 9 7
# 5
# 1 2 3 0 5

# Sample Output :
# 3 3 1 Not Present Not Present
