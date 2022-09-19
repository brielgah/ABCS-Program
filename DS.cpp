// An array is a type of data structure that stores elements of the same type in a contiguous block of memory. In an array,A , of size N, each memory location has some unique index,i  (where i<=i<N ), that can be referenced as A[i] or A_i.

// Reverse an array of integers.

// Note: If you've already solved our C++ domain's Arrays Introduction challenge, you may want to skip this.

// Example

// A =[1,2,3]
// Return [3,2,1]

//straightforward approach
//Time: O(n)
//Space: O(1)
vector<int> reverseArray(vector<int> a) {
    return reverse(a.begin(),a.end());
}

//the same but code by you
//Time: O(n)
//Space: O(1)
vector<int> reverseArray(vector<int> a)
{
    int l=0,r=a.size()-1;
    while(l<r)
        swap(a[l++],a[r--]);
    return a;
}