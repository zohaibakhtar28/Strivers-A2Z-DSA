#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i =0; i<=n-2; i++)
    {
        int mini = i;
        for(int j =i; j<=n-1; j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(int arr[], int n)
{
    for(int i = n-1; i>=0; i--)
    {
        int didswap=0;
        for(int j =0; j<=i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
        if(didswap==0)
        {
            break;
        }
    }
}

void insertion_sort(int arr[], int n)
{
    for(int i =0; i<= n-1; i++)
    {
        int j =i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
