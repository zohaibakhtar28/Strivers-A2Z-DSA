#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,arr[10000],k;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;

    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
    
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

    
}