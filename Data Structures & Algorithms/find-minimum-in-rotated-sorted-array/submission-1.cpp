class Solution {
public:
    int findMin(vector<int> &nums) {
        int left =0,mini=INT_MAX;
        int right=nums.size()-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(nums[mid]<=nums[right] ){
                mini=min(mini,nums[mid]);
                right=mid-1;
            }
            else{
                
                left =mid+1;
            }
        }
        return mini;
    }
};
