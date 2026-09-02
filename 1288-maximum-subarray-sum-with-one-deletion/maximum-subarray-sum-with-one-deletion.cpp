class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDel=arr[0];
        int oneDel=INT_MIN;
        int res=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            int prevND=noDel;
            noDel=max(arr[i],noDel+arr[i]);
            if(oneDel==INT_MIN)oneDel=arr[0];
            oneDel=max(oneDel+arr[i],prevND);
            res=max(res,max(noDel,oneDel));
        }
        return res;
    }
};