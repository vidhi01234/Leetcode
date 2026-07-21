//Memoization
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

//Tabulation with space optimization

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev =nums[0];
        int prev2=0;
        for(int i=1;i<n;i++)
        {
            int take=nums[i];
            if(i>0) take+=prev2;

            int notTake=0+prev;
            int curr=max(take,notTake);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }

    
};
