class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int smallest=INT_MAX,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0)continue;
            if(nums[i]<smallest) smallest=nums[i];
        }
        if(smallest==INT_MAX) smallest=0;
        if(smallest>1) return 1;
        unordered_set<int>seen;
        for(int i=0;i<n;i++ )seen.insert(nums[i]);
        cout<<seen.size();
        for(int i=0;i<seen.size();i++){
            cout<<"smallest: "<<smallest;
            if(seen.find(smallest+1)!=seen.end()) smallest +=1;
            else return smallest+1;
        }
        return smallest+1;
    }
};