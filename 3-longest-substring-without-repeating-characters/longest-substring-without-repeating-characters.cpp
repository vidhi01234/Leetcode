class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int heap_arr[256];
        for(int i=0;i<256;i++)heap_arr[i]=-1;
        int low=0,high=0,len=0;
        while(high<s.size())
        {
            if(heap_arr[s[high]]!=-1)
            {
                low=max(low,heap_arr[s[high]]+1);
            }
            len=max(len,high-low+1);
            heap_arr[s[high]]=high;
            high++;
        }
        return len;
    }
};