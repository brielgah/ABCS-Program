#include <bits/stdc++.h>
using namespace std;

char closingPar(string s,int &index,unordered_map<char,char> mapping)
{
    if(index == (int) s.size() && (s[index-1] != '(' || s[index-1] != '[' || s[index-1] != '{'))
        return '1';
    char openPar = s[index];
    if(s[index] == '(' || (int) s[index] == '[' || s[index] == '{')
    {
        index+=1;
        char closePar = closingPar(s,index,mapping);
        if(mapping[s[index]] == openPar)
        {
            index+=1;
            return closingPar(s,index,mapping);
        }
        else
            return '0';
    }
    else{return openPar;}
}

string isBalanced(string s) {
    unordered_map<char,char> mapping;
    mapping[')'] = '(';
    mapping[']'] = '[';
    mapping['}'] = '{';
    int index = 0;
    return closingPar(s,index,mapping) == '1' ? "YES":"NO"; 
}

// bool isValid(string input)
// {
//     unordered_map<char,char> mapping;
//     mapping[')'] = '(';
//     mapping[']'] = ']';
//     mapping['}'] = '}';
//     stack<char> openPar;
//     for(int x=0;x<input.size();x++)
//     {   
//         if(input[x] == '(' || input[x] == '{' || input[x] == '[')
//             openPar.push(input[x]);
//         else if(openPar.empty() || openPar.top != mapping[input[x]])
//             return false;
//         else
//             openPar.pop();
            
//     }
//     return openPar.empty()
// }

int main()
{
    string s = "{[()]}";
    string s1 = "{[(])}";
    string s2 = "{{[[(())]]}}";
    cout << isBalanced(s);
    cout << isBalanced(s1);
    cout << isBalanced(s2);
}