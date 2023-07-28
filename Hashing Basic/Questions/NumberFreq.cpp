#include<bits/stdc++.h>
vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    //int result_size = *max_element(nums.begin(), nums.end()) + 1; 
    vector<int> result(n, 0); 
    
    
    for(int i = 0 ; i<nums.size(); i++)
    {
       result[nums[i]-1] = result[nums[i]-1] + 1; 
       
    }

    return result;
}