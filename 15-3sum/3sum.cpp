class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        int sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])continue;
            int left=i+1;
            int right=n-1;
            sum=-1*nums[i];
            while(left<right)
            {
                int s=nums[left]+nums[right];
                if(s<sum)
                {
                    left++;
                }
                
                if(s>sum)
                    right--;
               
                if(s==sum)
                {
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])
                    left++;
                }
                
            }
        }
        return ans;
    }
};