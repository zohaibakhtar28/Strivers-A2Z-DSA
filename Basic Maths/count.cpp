#include <bits/stdc++.h>
#include <iostream>
int countDigits(int n)
{
    // Write your code here.
    int m = n, d = 0, count = 0;
	while(m != 0) {
		d = m % 10;
		if(d != 0 && n % d == 0) count++;
		m = m / 10;
	}
	return count;
}

int main()
{
    int ans = countDigits(980);
    std::cout << ans;
    return 0;
}