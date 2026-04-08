class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int ,int>freqCount;
       for(int i=0;i<nums.size();i++){
        freqCount[nums[i]]++;
       } 
      vector<vector<int>>group(nums.size()+1);
      for(auto it: freqCount){
        int freq=it.second;
        int value= it.first;
        group[freq].push_back(value);
      } 
      vector<int>result;
      int count=0;
      for(int i=group.size()-1;i>=0;i--){
        for(int j=0;j<group[i].size() && count<k;j++){
          result.push_back(group[i][j]);
          count++;
        }
      }
      return result;
    }
};
