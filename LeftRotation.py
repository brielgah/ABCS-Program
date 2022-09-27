# Using deque
# Time:O(n)
# Space:O(n)
from collections import deque

# def rotateLeft(d, arr):
#     d%=len(arr)
#     tempArray = deque(arr)
#     while(d):
#         first = tempArray.popleft()
#         tempArray.append(first)
#         d-=1
#     return tempArray

# Time:O(n)
# Space: O(n)
def rotateLeft(d, arr):
    d%=len(arr)
    tempArray = list(arr)
    for i in range(0,len(arr)):
        number = arr[i]
        newIndex = (len(arr)+i - d) % len(arr)
        tempArray[newIndex] = number
    return tempArray

# Time:O(n)
# Space: O(1)
def reverseParcial(i,j,arr):
    while(i < j):
        arr[i],arr[j] = arr[j],arr[i]
        i+=1
        j-=1
        
def rotateLeft(d, arr):
    d%=len(arr)
    arr.reverse()
    reverseParcial(len(arr)-d,len(arr)-1,arr)
    reverseParcial(0,len(arr)-d-1,arr)
    return arr