"""
An array is a type of data structure that stores elements of the same type in a contiguous block of memory. In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as  or .

Reverse an array of integers.

Note: If you've already solved our C++ domain's Arrays Introduction challenge, you may want to skip this.

Example

A = [1,2,3]

Return [3,2,1]

Function Description

Complete the function reverseArray in the editor below.

reverseArray has the following parameter(s):

int A[n]: the array to reverse
Returns

int[n]: the reversed array

"""
def reverseArray(a):
    l,r = 0,len(a)-1
    while(l<r):
        a[l],a[r] = a[r],a[l]
        l+=1
        r-=1
    return a
        
