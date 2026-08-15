class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
        int p=0,n=0;
        int num=nums.size();
        for(int i=0;i<num;i++)
        {
            if(nums[i]<0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }
        if(pos.size()==0)
        {
            for(int i=0;i<neg.size();i++)
            {
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        if(neg.size()==0)
        {
            for(int i=0;i<pos.size();i++)
            {
                pos[i]=pos[i]*pos[i];
            }
            return pos;
        }
        for(int i=0;i<neg.size();i++)
        {
            neg[i]=neg[i]*neg[i];
        }
        for(int i=0;i<pos.size();i++)
        {
            pos[i]=pos[i]*pos[i];
        }
        reverse(neg.begin(),neg.end());
        while(p<pos.size() && n<neg.size())
        {
            if(pos[p]<neg[n])
            {
                ans.push_back(pos[p]);
                p++;
            }
            else
            {
                ans.push_back(neg[n]);
                n++;

            }
        }
        while(p<pos.size())
        {
            ans.push_back(pos[p]);
            p++;
        }
        while(n<neg.size())
        {
            ans.push_back(neg[n]);
            n++;
        }
        return ans;
    }
};