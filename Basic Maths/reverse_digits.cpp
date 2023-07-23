class Solution {
public:
    long long int reverse(int x) {
        long long int reverse =0, last_digit=0;
        int dupe = abs(x);
        while(dupe>0)
        {
            last_digit = dupe%10;
            reverse = reverse*10 + last_digit;
            dupe = dupe/10;
        }
        if(x<0)
        {
            reverse = reverse - 2*reverse;
        }
        if(reverse<INT_MIN || reverse > INT_MAX)
        {
            return 0;
        }
        return reverse;
        


        
    }
};