class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string prefix =strs[0];
       

        for (int i =1;i<strs.size();i++){
            while(prefix !=  strs[i].substr(0,prefix.size())){
               
                prefix.pop_back();
                 if(prefix.empty()) return "";
                
            }
                
            
        }
        return prefix;
    }
};