//Time:O(n+m)
//Space:O(n+m)
vector<int> merge_arrays(vector<int> arr1, vector<int> arr2) {
    int indexOne = 0,indexTwo = 0;
    vector<int> mergedArray;
    while(indexOne < (int)arr1.size() || indexTwo < (int)arr2.size())
    {
        int valueToPush = 0;
        if(indexOne < (int)arr1.size() && indexTwo < (int)arr2.size())
        {
            valueToPush = arr1[indexOne] < arr2[indexTwo] ? arr1[indexOne++] : arr2[indexTwo++];
        }
        else
        {
            valueToPush = indexOne < (int)arr1.size() ? arr1[indexOne++] : arr2[indexTwo++];
        }
        mergedArray.push_back(valueToPush);
    }
    return mergedArray;
}