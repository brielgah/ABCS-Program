/* STATEMENT
Given a string, determine if there is a sequential subsequence of characters that spell the
word “facebook”.
*/
// Time: O(n)
// Space: O(1)
bool containsFacebook(string s)
{
    string fbWord = "facebook";
    int indexFbWord = 0, indexString = 0;
    while (indexFbWord < fbWord.size() && indexString < s.size())
    {
        if (s[indexString] == fbWord[indexFbWord])
            indexFbWord++;
    }
    return indexFbWord == fbWord.size();
}

/* STATEMENT
We define subsequence as any subset of an array. We define a subarray as a contiguous
subsequence in an array.
Given an array, find the maximum possible sum among all possible subarrays..
*/

int findMaximumSum(vector<int> nums)
{
    int sum = 0;
    int l = 0, r = 0;
    while (r < nums.size())
    {
        sum += nums[r];
        if (sum < 0)
        {
            while (sum < 0)
            {
                sum -= nums[l++];
            }
        }
        r++;
    }
    return sum;
}