//Using deque
//Time:O(n)
//Space:O(n)
vector<int> rotateLeft(int d, vector<int> arr) {
    d = d%arr.size();
    deque<int> numbers;
    for(auto number:arr)
        numbers.push_back(number);
    while(d--)
    {
        int firstNum = numbers[0];
        numbers.pop_front();
        numbers.push_back(firstNum);
    }
    for(int x=0;x<(int)numbers.size();x++)
        arr[x] = numbers[x];
    return arr;
}
//Using deque
//Time:O(n)
//Space:O(n)
vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> tempArray = arr;
    for(int x=0;x<arr.size();x++)
    {
        
    }

}