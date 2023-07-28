class Solution {
public:
    int fib(int n) {
        int ans = solve(n);
        return ans;
    }

    int solve(int x )
    {
        if(x<=1)
        {
            return x;
        }
        return solve(x-1) + solve(x-2);

    }
};