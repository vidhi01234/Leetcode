class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0,len=0,maxf=0,res=0;
        int n=s.size();
        int heap[26]={0};
        for(int high=0;high<n;high++)
        {
            heap[s[high]-'A']++;
            maxf=max(maxf,heap[s[high]-'A']);
            len=high-low+1;
            while((len-maxf)>k)
            {
                heap[s[low]-'A']--;
                low++;
                len=high-low+1;
            }
            res=max(res,len);
        }
        return res;
    }
};