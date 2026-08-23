class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0;
        int n=nums.size();
        int len=INT_MAX;
        int sum=0;
        for(int right=0;right<n;right++)
        {
            sum+=nums[right];
            while(sum>=target)
            {
                len=min(len,(right-left)+1);
                cout<<len<<endl;
                sum-=nums[left];
                left++;
            }
        }
        if(len==INT_MAX)
            len=0;
        return len;
    }
};