class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n = nums.size();
        vector<int>ans;
        ans.reserve(2*n);
        for(int i=0;i<2*n;i++)ans.push_back(nums[i%n]);

        return ans;

        
    }
};