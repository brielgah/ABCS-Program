// Time: O(n);
// Space: O(n);
void next_greater_element(vector<int> arr)
{
    vector<int> ans(arr.size(), -1);
    stack<int> greaterElements;
    for (int x = arr.size() - 1; x >= 0; x++)
    {
        if (greaterElements.empty())
        {
            greaterElements.push(arr[x]);
        }
        else
        {
            int greater = greaterElements.top();
            if (greater > arr[x])
            {
                ans[x] = greater;
                greaterElements.push(arr[x]);
            }
            else
            {
                while (!greaterElements.empty() && greaterElements.top() < arr[x])
                {
                    greaterElements.pop();
                }
                ans[x] = greaterElements.empty() ? -1 : greaterElements.top();
                greaterElements.push(arr[x]);
            }
        }
    }
    return ans;
}