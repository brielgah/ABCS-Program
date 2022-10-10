// Time:O(nlogn)
// Space:O(1)
int are_anagrams(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

// Time:O(n)
// Space:O(n)
int are_anagrams(string s1, string s2)
{
    unordered_map<char, int> lettersCount;
    for (auto letter : s1)
    {
        lettersCount[letter]++;
    }
    for (auto letter : s2)
    {
        lettersCount[letter]--;
    }
    for (auto letter : lettersCount)
    {
        if (letter.second != 0)
            return false;
    }
    return true;
}