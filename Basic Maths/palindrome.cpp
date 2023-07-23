class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0, last_digit = 0, dupe= x ;
        if(x<0)
            return false;
        
        while(x>0)
        {
            last_digit = x%10;
            rev = rev*10 + last_digit;
            x=x/10;
        }
        if(rev== dupe)
        {
            return true;
        }
        return false;


        

        
    }
};