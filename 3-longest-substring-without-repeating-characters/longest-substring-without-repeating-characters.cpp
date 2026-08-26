class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>freq;
        int low=0,len=0,ans=0;
        int n=s.size();
        for(int high=0;high<n;high++)
        {
            freq[s[high]]++;
            len=(high-low)+1;
            while(freq.size()<len)
            {
                freq[s[low]]--;
                if(freq[s[low]]==0)freq.erase(s[low]);
                low++;
                len=(high-low)+1;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};