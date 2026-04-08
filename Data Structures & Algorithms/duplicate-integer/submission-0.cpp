class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
     
        unordered_set<int>s;
        s.reserve(nums.size());
        for(int i=0;i<nums.size();i++){
            if(!s.insert(nums[i]).second)return true;    
        }
        return false;
    }
};