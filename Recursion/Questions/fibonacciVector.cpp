void solve(vector<int> &a, int x, int i, int last, int next, int current)
{
    if(i>=x)
    {
        return ;
    }
    a.push_back(current);
    current = next;
    next = last + next;
    last = current;
    solve(a,x,i+1,last,next,current);

}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> ans;
    solve(ans, n , 0, 0 ,1,0);
    return ans;
}