class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            int count =it.second;
            if(count > nums.size()/3) result.push_back(it.first);
        }
        return result;
    }
};