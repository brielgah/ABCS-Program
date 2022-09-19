#include <bits/stdc++.h>

using namespace std;
int find_unique(vector<int> haystack) {
    int num = 0;
    for(int x=0;x<(int) haystack.size();x++)
        num = num ^ haystack[x];
    return num;
}

int main()
{
    vector<int> x = vector<int>{1,1,2,5,3,3,2};
    cout << find_unique(x);
}

