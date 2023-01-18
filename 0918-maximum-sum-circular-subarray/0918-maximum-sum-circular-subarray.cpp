class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int total = 0, maxs = nums[0], cmax = 0, mins = nums[0], cmin = 0;
        for(int i=0;i<nums.size();i++)
        {
            cmax=max(nums[i],cmax+nums[i]);
            maxs=max(maxs,cmax);
            cmin=min(nums[i],cmin+nums[i]);
            mins=min(mins,cmin);
            total+=nums[i];
        }
        return maxs>0?max(maxs,total-mins):maxs;
    }
};