#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reversearray(int i, int arr[] , int size)
{
    if(i>=size/2)
        return;
    swap(arr[i], arr[size-i-1]);
    reversearray(i+1, arr, size);

}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];

    }
    reversearray(0, array, n);

    cout<<"Reverse"<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    
}