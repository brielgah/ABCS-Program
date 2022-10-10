// Time: O(logn)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

int findIndex(vector<int> haystack, int needle)
{
    int left = 0, right = haystack.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (haystack[mid] == needle)
            return mid;
        if (haystack[mid] > needle)
            right = mid - 1;
        left = mid + 1;
    }
    return -1;
}