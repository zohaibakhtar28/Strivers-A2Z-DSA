void solve(vector<int> &a, int n)
{
    if(n==0)
    {
        return ;
    }
    a.push_back(n);
    solve(a,n-1);
    
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    solve(ans,x);
    sort(ans.begin(), ans.end());
    return ans;
}