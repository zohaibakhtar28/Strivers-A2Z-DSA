#include<iostream>
using namespace std;

void solve(long int &sum, int x)
{
    if(x==0)
    {
        return;
    }
    sum = sum + x;
    solve(sum, x-1);
    

}

int sumFirstN(int n) {
    // Write Your Code Here
    long int ans =0;
    solve(ans, n);
    return ans;
}

int main()
{
    cout<<sumFirstN(3);

return 0;
}


