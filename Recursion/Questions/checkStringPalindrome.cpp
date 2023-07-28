bool solve(int i, string &s, int size)
{
    if(i>=size/2)
        return true;
    if(s[i]!= s[size-i-1])
        return false;
    
    solve(i+1, s, size);
}
bool isPalindrome(string& str) {
    // Write your code here.
    return solve(0, str, str.size());
    

}
