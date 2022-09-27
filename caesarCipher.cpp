//Time: O(n)
//Space:O(1)
string caesarCipher(string s, int k) {
    k = k %26;
    for(int x=0;x<(int)s.size();x++)
    {
        int dec = (int) s[x];
        if(s[x]>64 && s[x] <= 90)
        {
            dec -= 'a';
            cout << dec;
            dec+=k;
            s[x] = dec%26 + 'a';
        }
        else if(s[x]>96 && s[x] <= 122)
        {
            dec -= 'A';
            dec+=k;
            s[x] = dec%26 + 'A';
        }
    }
    return s;
}