string longest_common_prefix(vector<string> strings)
{
    sort(strings.begin(), strings.end());
    string s1 = strings[0], s2 = strings[strings.size() - 1];
    string ans = "";
    for (int x = 0; x < (int)s1.size(); x++)
    {
        if (s1[x] != s2[x])
            break;
        else
            ans.push_back(s1[x]);
    }
    return ans;
}