int calcGCD(int n, int m){
    // Write your code here.
    int gcd =1;
    while(n>0 && m>0)
    {
        if(n>m)
            n = n%m;
        else
            m = m%n;
    }

    if(n==0){gcd = m;}
    else if(m==0){gcd = n;}
    return gcd;
}