class Solution {
public:
    string minWindow(string s, string t) {
        int heap[256]={0};
        int low=0,strI=-1,len=INT_MAX,count=0;
        int n=s.size();
        int m=t.size();
        for(int i=0;i<m;i++)
        {
            heap[t[i]-'A']++;
        }
        for(int high=0;high<n;high++)
        {
            if(heap[s[high]-'A']>0)
                count++;
            heap[s[high]-'A']--;
            while(count==m)
            {
                if(high-low+1<len)
                {
                    len=high-low+1;
                    strI=low;
                }
                heap[s[low]-'A']++;
                if(heap[s[low]-'A']>0)
                    count--;
                low++;
            }

        }
        if(strI==-1)
            return "";
        else
            return s.substr(strI,len);
    }
};