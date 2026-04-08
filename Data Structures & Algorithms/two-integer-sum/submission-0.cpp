class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>ans;
        ans.reserve(2);
        unordered_map<int,int>hash;
        hash.reserve(nums.size());
        for(int i=0;i<nums.size();i++){
          int temp=target-nums[i];
          //check temp present in the hash or not 
          if(hash.find(temp)!=hash.end()){
           return {hash[temp],i};
          }  
          else{
            hash[nums[i]]=i;;
          }

        }
        return {};
    }
};
