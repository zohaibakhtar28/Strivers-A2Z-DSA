#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    //Array1 : [low...mid]
    //Array2 : [mid+1...high]
    int left = low;
    int right = mid+1;
    while(left<=mid && right<= high)
    {
        if(arr[left]<= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;

        }
    }

    while(left<= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i= low; i<=high; i++)
    {
        arr[i] = temp[i-low];
    }
}

void mergesort (vector<int> &arr, int low, int high)
{
    if(low == high){return;}
    int mid = (low + high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {3,1,2,4,1,5,6,2,4};
    mergesort(arr,0,arr.size()-1);
    cout<<"Sorted Array\n";
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
return 0;
}