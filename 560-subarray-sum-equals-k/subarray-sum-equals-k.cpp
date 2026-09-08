class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0,res=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int temp=sum-k;
            int freq=mp[temp];
            res+=freq;
            mp[sum]++;
        }
        return res;
    }
};