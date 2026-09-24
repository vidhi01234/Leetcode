class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int count;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            count=0;
            while(num>0)
            {
                count+=num%10;
                num=num/10;
            }
            if(count==i)
            {
                return i;
            }
        }
        return -1;
    }
};