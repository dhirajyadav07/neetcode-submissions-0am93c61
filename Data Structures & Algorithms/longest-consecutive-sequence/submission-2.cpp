class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        if(nums.size()==0)return 0;
        int count=0;
        for(int i=0;i<nums.size();i++){
          s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
          int val=nums[i];
          int tempcount=0;
         for(int j=0;j<s.size();j++){
          if(s.find(val+1)!=s.end()){
            val +=1;
            tempcount++;
          }
          else{
            break ;
          }
         }
        count= max(count,tempcount);
        }
        return count+1;
    }
};
