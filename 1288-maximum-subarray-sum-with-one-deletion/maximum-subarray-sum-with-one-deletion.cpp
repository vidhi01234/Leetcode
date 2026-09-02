class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDel=arr[0];
        int oneDel=arr[0];
        int res=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            int prevND=noDel;
            noDel=max(arr[i],noDel+arr[i]);
            oneDel=max(oneDel+arr[i],prevND);
            res=max(res,max(noDel,oneDel));
        }
        return res;
    }
};