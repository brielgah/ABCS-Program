//Statement
/*
A left rotation operation on an array of size  shifts each of the array's elements  unit to the left. Given an integer, , rotate the array that many steps left and return the result.
Example

d = 2
arr = [1,2,3,4,5]

After 2 rotations, arr' = [3,4,5,1,2] .

Function Description

Complete the rotateLeft function in the editor below.

rotateLeft has the following parameters:

int d: the amount to rotate by
int arr[n]: the array to rotate
Returns

int[n]: the rotated array

*/

//Solutions

//Using deque
//Time:O(n)
//Space:O(n)
#include <bits/stdc++.h>
using namespace std;

// vector<int> rotateLeft(int d, vector<int> arr) {
//     d = d%arr.size();
//     deque<int> numbers;
//     for(auto number:arr)
//         numbers.push_back(number);
//     while(d--)
//     {
//         int firstNum = numbers[0];
//         numbers.pop_front();
//         numbers.push_back(firstNum);
//     }
//     for(int x=0;x<(int)numbers.size();x++)
//         arr[x] = numbers[x];
//     return arr;
// }

//Time:O(n)
//Space:O(n)
vector<int> rotateLeft(int d, vector<int> arr) {
	d%=arr.size();
	vector<int> tempArray = arr;
    for(int x=0;x<arr.size();x++)
    {
        int number = arr[x];
        int newIndex = ((arr.size() - d) + x) % arr.size();
        tempArray[newIndex] = number;   
    }
    return tempArray;
}

//Time:O(n)
//Space:O(1)
vector<int> rotateLeft(int d,vector<int> arr)
{
    reverse(arr.begin(),arr.end());
    reverse(arr.begin()+arr.size()-d,arr.end());
    reverse(arr.begin(),arr.end()-d);
    return arr;
}

