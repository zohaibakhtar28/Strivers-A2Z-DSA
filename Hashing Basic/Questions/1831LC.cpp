class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
         long sum = 0;
         long l = 0;
         long  ans =1;
        
        for(int r = 0; r<nums.size(); r++)
        {
            sum = sum + nums[r];
            if((r-l + 1)*nums[r] <= k+sum)
            {
                ans = max(ans, r-l +1);
            }
            else
            {
                while((r-l+1)*nums[r] > k+sum)
                {
                    sum = sum - nums[l];
                    l++;
                }
            }
        }

        return ans;
        
    }
};