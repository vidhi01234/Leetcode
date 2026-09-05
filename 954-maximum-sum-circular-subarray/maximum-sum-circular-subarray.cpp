class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int minSum=nums[0],maxSum=nums[0];
        int totalSum=nums[0];
        int result=nums[0];
        int miin=nums[0],maax=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            totalSum+=nums[i];
            maxSum=max(nums[i],maxSum+nums[i]);
            minSum=min(nums[i],minSum+nums[i]);
            miin=min(miin,minSum);
            maax=max(maax,maxSum);
        }
        if(maax<0)return maax;
        result=max(totalSum-miin,maax);
        return result;
    }
};