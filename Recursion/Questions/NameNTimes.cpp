void solve(vector<string> &a, int n)
{
	if(n<=0)
	{
		return;
	}
	a.push_back("Coding Ninjas");
	solve(a, n-1);
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> ans;
	solve(ans, n);
	return ans;
	
}

