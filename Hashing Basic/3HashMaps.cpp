#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Occurance of Digits using HashMaps;
int main()
{
    int arr[] = {7,2,7,3,8,0,3,5,4,4};
    unordered_map<int,int> mpp;
    for(int i =0; i<10; i++)
    {
        mpp[arr[i]]++;
    }
    //Iterating our Map.
    cout<<"Map"<<endl;
    for(auto it : mpp)
    {
        cout<<"Value : "<<" "<<it.first<<" "<<"Frequency :"<<" "<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int no;
        cin>>no;
        cout<<"Frequency :"<<" "<<mpp[no]<<endl;

    }


return 0;
}