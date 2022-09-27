# Time: O(n)
# Space: O(n)
def caesarCipher(s, k):
    s2 = s.lower()
    k%=26
    ans = ""
    for i,val in enumerate(s2):
        if(val.isalpha()):
            dec = ord(val)+k - ord('a')
            print(dec)
            newVal = chr((dec%26)+ord('a'))
            if(s[i].isupper()):
                ans+=newVal.upper()
            else:
                ans+=newVal
        else:
            ans+=val
    return ans