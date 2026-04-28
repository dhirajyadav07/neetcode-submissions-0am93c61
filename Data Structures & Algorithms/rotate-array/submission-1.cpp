class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       k=k%n;
       int first=n-k;
        reverse(nums.begin(),nums.begin()+first);
        reverse(nums.begin()+first,nums.end());
        reverse(nums.begin(),nums.end());

    }
};