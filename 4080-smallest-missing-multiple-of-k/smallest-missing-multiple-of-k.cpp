class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int t=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            
            while(i>0 && i<n && nums[i]==nums[i-1])
                i++;
            if(i>=n)return k*t;
            if(nums[i]%k!=0)continue;
            if(nums[i]/k==t)
                t++;
            else
                return k*t;
        }
        return k*t;
    }
};