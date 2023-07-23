bool checkArmstrong(int n){
	//Write your code here
	int dupe =n, sum =0 ,ld =0;
	int digits = (int)(log10(n) + 1);
	while(dupe>0)
	{
		ld=dupe%10;
		sum = sum + pow(ld, digits);
		dupe/=10;

	}
	if(sum != n)
		return false;
	
	return true;
}