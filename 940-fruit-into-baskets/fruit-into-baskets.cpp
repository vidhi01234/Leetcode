class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>freq;
        int low=0,count=0,ans=0;
        int n=fruits.size();
        for(int high=0;high<n;high++)
        {
            if(freq[fruits[high]]==0)count++;
            freq[fruits[high]]++;
            while(count>2)
            {
                freq[fruits[low]]--;
                if(freq[fruits[low]]==0)count--;
                low++;
            }
            ans=max(ans,(high-low)+1);
        }
        return ans;
    }
};