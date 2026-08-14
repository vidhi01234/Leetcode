class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,c=1;;
        while(j<nums.size())
        {
             if(nums[j]!=nums[i])
             {
                nums[i+1]=nums[j];
                i++;
                c+=1;
             }
             j++;
        }
        return c;
    }
};