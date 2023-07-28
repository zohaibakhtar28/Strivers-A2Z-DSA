void solve(int l, int size, vector<int> &array)
{
    if(l>=size/2)
    {
        return;
    }
    swap(array[l], array[size-l-1]);
    solve(l+1, size, array);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    solve(0,n,nums);
    return nums;


}
