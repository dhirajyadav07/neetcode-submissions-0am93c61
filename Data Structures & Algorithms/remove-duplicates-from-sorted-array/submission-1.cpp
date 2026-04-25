class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,n=nums.size();
        if(n==1)return 1;
        while(j<n){
            if(nums[i]!=nums[j]){
                i++;
                j++;
            }
            while(nums[i]==nums[j])j++;
            i++;
            nums[i]=nums[j];
        }
        return i;
    }
};