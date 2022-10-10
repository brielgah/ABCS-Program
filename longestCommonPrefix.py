def longest_common_prefix(strings):
    strings.sort()
    first = strings[0]
    last = strings[-1]
    commonPrefix = ""
    for i in range(0,len(first)):
        if(first[i] == last[i]):
            commonPrefix+=first[i]
        else:
            break
    return commonPrefix