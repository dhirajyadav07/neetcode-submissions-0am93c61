#include <array>

class Solution {
public:
    bool isAnagram(string s, string t) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n=s.size(),m=t.size();
        if(n!=m)return false;
        array<int,26> freq_count = {0};
        for(int i=0;i<n;i++){
            freq_count[s[i]-'a']++;
            freq_count[t[i]-'a']--;
        }
        for(auto &count:freq_count){
            if(count!=0)return false;
        }
        return true;
    }
};
