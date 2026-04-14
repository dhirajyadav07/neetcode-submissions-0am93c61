class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right =1;
        while(right <nums.size()){
            if(nums[left]!=0){
                if(nums[right]==0){
                    swap(nums[left++],nums[right++]);
                    
                }else{right ++;}
            }else{left++; right++;}
        }
         right =nums.size()-1;
         left =right -1;
        while(right >=0 && nums[left]!=0){
            if(nums[right]!=2){
                if(nums[left]==2){
                    swap(nums[right--],nums[left--]);

                }else{left--;}
            }else{right--; left--;}
        }
    }
};