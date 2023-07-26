#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i , string &s, int n)
{
    if(i>= s.size()){return true;}
    if(s[i]!= s[n-i-1]){return false;}
    checkPalindrome(i+1, s, n);

}
int main()
{
    string str = "MADAME";
    cout<<checkPalindrome(0,str, str.size());
    
return 0;
}