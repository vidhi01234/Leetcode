class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        int max_diff=INT_MAX;
        int diff;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int left=i+1;
            int right=n-1;
            
            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                diff=abs(sum-target);
                if(diff<max_diff)
                {
                    max_diff=diff;
                    ans=sum;
                }
                if(sum==target)
                {
                    return ans;
                }
                if(sum<target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return ans;
    }
};