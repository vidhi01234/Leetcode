class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0,right=0,total=0;
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            right=total-nums[i]-left;
            if(left==right)return i;
            left+=nums[i];

        }
        return -1;
    }
};