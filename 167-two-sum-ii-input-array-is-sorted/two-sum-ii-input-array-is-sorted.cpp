class Solution {
public:
    vector<int> twoSum(vector<int>& number, int target) {
        int i=0;
        int j=number.size()-1;
        vector<int>ans;
        while(i<j)
        {
            if(number[i]+number[j]==target){
                ans.insert(ans.end(),{i+1,j+1});
                return ans;
            }
            if(number[i]+number[j]<target)
                i++;
            if(number[i]+number[j]>target)
                j--;
        }
        return ans;
    }
};