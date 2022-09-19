#include <bits/stdc++.h>
using namespace std;

void helper(string &max,string min,int indexMax,int indexMin,int carry)
{
    if(indexMax >= 0 && indexMin >= 0)
    {
        int num1 = max[indexMax] - '0';
        int num2 = min[indexMin] - '0'; 
        int num3 = num1+num2+carry;
        cout << num3;
        carry = num3 > 9 ? 1:0;
        num3 = num3%10;
        max[indexMax] = num3 + '0';
        if(indexMax == 0 && carry == 1)
            max.insert(0,"1");
        helper(max,min,indexMax-1,indexMin-1,carry);
    }
    else if(indexMax >= 0){
        int num1 = max[indexMax] - '0';
        int num3 = num1+carry;
        cout << num3;
        carry = num3 > 9 ? 1:0;
        num3 = num3%10;
        max[indexMax] = num3 + '0';
        if(indexMax == 0 && carry == 1)
            max.insert(0,"1");
        helper(max,min,indexMax-1,indexMin-1,carry);
    }
}

string compute_sum(string x, string y) {
    string max;
    string min;
    if(x.size() > y.size())
    {
        max = x;
        min = y;
    }
    else
    {
        max = y;
        min = x;
    }
    helper(max,min,(int)max.size()-1,(int)min.size()-1,0);
    return max;
}

int main()
{
    string s1 = "1";
    string s2 = "2";
    cout << compute_sum(s1,s2) << endl;
}