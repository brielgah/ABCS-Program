#Time:O(n+m)
#Space:O(n+m)
def merge_arrays(arr1, arr2):
    mergedArr = []
    i = 0
    j = 0
    while(i < len(arr1) or j < len(arr2)):
        valueToPush = 0
        if i < len(arr1) and j < len(arr2):
            if arr1[i] < arr2[j]:
                valueToPush = arr1[i]
                i+=1
            else:
                valueToPush = arr2[j]
                j+=1
        else:
            valueToPush = arr1[i] if i < len(arr1) else arr2[j]
            i+=1
            j+=1     
        mergedArr.append(valueToPush)
    return mergedArr
        