#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    //Range of Nos. 0 to 10

    int hash[11] ={0};
    for(int i =0; i<n; i++)
    {
        hash[arr[i]]++;
    }

    int q; //No. of Target Elements;
    cin>>q;
    while(q--)
    {
        int number ;
        cin>>number;
        cout<<"Count of"<<" "<<number<<"is :"<<" "<<hash[number];
    }
return 0;
}