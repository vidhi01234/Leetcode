class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minEnd=nums[0],maxEnd=nums[0];
        int ans=nums[0];
        int miin,maax;
        for(int i=1;i<nums.size();i++)
        {
            miin=minEnd*nums[i];
            maax=maxEnd*nums[i];
            minEnd=min(nums[i],min(miin,maax));
            maxEnd=max(nums[i],max(miin,maax));
            ans=max(ans,max(minEnd,maxEnd));
        }
        return ans;
    }
};