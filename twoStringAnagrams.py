# Time:O(nlogn)
# Space:O(1)
def are_anagrams(s1, s2):
    sortedS1 = sorted(s1)
    sortedS2 = sorted(s2)
    return 1 if sortedS1 == sortedS2 else 0

# Time:O(n)
# Space:O(n)
def are_anagrams(s1,s2):
    countLetter = defaultdict(int)
    for letter in s1:
        countLetter[letter]+=1
    for letter in s2:
        countLetter[letter]-=1
    for key in countLetter:
        if(countLetter[key] != 0):
            return 0
    return 1
    
