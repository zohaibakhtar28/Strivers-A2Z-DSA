#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
     int temp = arr[0];
    for(int i =1; i<=arr.size()-1; i++)
    {
       
        arr[i-1] = arr[i];


    }
    arr[arr.size()-1] = temp;
    return arr;
}
