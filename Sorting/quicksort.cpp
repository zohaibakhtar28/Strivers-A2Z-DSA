#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j)
    {
        while(arr[i]<= pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]> pivot && j>= low-1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;

}


void qs(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int p_index = partition(arr, low, high);
        qs(arr, low, p_index-1);
        qs(arr, p_index+1, high);

    }
}


int main()
{
    vector<int> arr = {7,2,7,3,8,0,3,5,4,4};
    qs(arr, 0, arr.size()-1);
    for(auto it : arr)
    {
        cout<<it<<" ";
    }

return 0;
}