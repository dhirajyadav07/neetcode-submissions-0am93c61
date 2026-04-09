class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0;
        while(j<nums.size()){
        if(nums[i]==val){
            if(nums[j]==val){
                j++;
            }
            else{
                swap(nums[i++],nums[j++]);

            }

                          }
                          else{
                            i++;j++;
                          }

         
          }
    for(int i =0;i<nums.size();i++){
        if(nums[i]==val) return i;
    }
    return nums.size();
    }
};