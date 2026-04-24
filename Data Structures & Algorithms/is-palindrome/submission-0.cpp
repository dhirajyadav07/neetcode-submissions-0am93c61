class Solution {
public:
    bool isPalindrome(string s) {
        string final="";
        for(char c:s) if(isalnum(c)) final +=tolower(c);
        int n=final.size();
        for(int i=0;i<=n/2;i++){
         if(final[i]!=final[n-1-i])return false;
        }
        return true;
    }
};
