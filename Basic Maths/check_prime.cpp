int sumOfAllDivisors(int n){
	// Write your code here.
	vector<int> divisors;	
	for(int i = 1; i<=n; i++)
	{
		int j = 1;
		while(j*j<=i)
		{
			if(i%j == 0)
			{
				divisors.push_back(j);
				if((i/j)!= j)
					divisors.push_back(i/j); 
			}
			j++;
		}
	}
	

	int sum = accumulate(divisors.begin(), divisors.end(), 0);
	return sum;
}