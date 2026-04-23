class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>mp;
       int n= nums.size();
       int end =n/3;
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            int count =it.second;
            if(count > end) result.push_back(it.first);
        }
        return result;
    }
};