class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1; 
        while(low <=high){
            int mid=(low+high)/2;
            if(target==nums[mid])return true;
            if(nums[mid]==nums[low] && nums[mid]==nums[high] ){
                low++;
                high--;
                continue;
            }
            if(nums[low]<=nums[mid]){  //low side sorted 
                if(target >=nums[low] && target <=nums[mid]){//target present
                high=mid-1;
                }else{
                 low =mid+1;
                }
            }
            else{ //high side sorted
                 if(target >=nums[mid] && target <=nums[high]){//target present
                low=mid+1;
                }else{
                 high =mid-1;
                }
            }
        }
        return false;
    }
};