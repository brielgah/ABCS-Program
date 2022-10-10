def findIndex(haystack, needle):
    left, right = 0, len(haystack)-1;
    while(left <= right):
        mid = left + (right - left) / 2;
        if (haystack[mid] == needle):
            return mid;
        if (haystack[mid] > needle):
            right = mid - 1;
        left = mid + 1;
    return -1;