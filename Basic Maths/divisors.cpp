#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sumOfAllDivisors(int n){
	// Write your code here.	
	int sum = 0;
	vector <int> divisors;
	for(int j =1; j<= n; j++)
	{
		
    	for(int i =1; i*i<=j; i++)
    	{
        if(j%i  == 0)
            divisors.push_back(i);
                if(j/i != i)
                    divisors.push_back(j/i);

    	}
	}

	for(int i =0; i<divisors.size(); i++)
	{
		sum = sum+divisors[i];
	}
	return sum;
}

int main(int argc, char const *argv[])
{
    cout<<sumOfAllDivisors(8)<<endl;
    return 0;
}
