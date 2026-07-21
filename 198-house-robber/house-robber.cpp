class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(n-1,nums,dp);
    }

    int f(int idx,vector<int>& nums,vector<int>& dp)
    {
        if(idx==0)return nums[idx];
        if(idx==-1)return 0;

        if(dp[idx]!= -1) return dp[idx];

        int pick= f(idx-2,nums,dp)+nums[idx];
        int notPick=f(idx-1,nums,dp)+0;

        return dp[idx]=max(pick,notPick); 
    }
};