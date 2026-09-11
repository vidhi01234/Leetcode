class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int one=0,res=0,zero=0,diff=0,idx=0,len=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)zero++;
            else
                one++;
            diff=zero-one;
            if(diff==0)
            {
                res=max(res,i+1);
                continue;
            }
            else
            {
                if(mp.find(diff)==mp.end())
                {
                    mp[diff]=i;
                }
                else
                {
                    idx=mp[diff];
                    len=i-idx;
                    res=max(res,len);
                }
            }
        }
        return res;
    }
};