class Solution {
public:

    string encode(vector<string>& strs) {
      string encodedStr;
     for(auto str:strs){
      int len= str.size();
    encodedStr += to_string(len) + "#" + str;
     }
     return encodedStr;

    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            j++;
            string word = s.substr(j, len);
            result.push_back(word);
            i = j + len;
        }
        return result;
    }
};
