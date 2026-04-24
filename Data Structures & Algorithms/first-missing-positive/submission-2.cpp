class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int smallest=1,n=nums.size();
        unordered_set<int>seen;
        for(int i=0;i<n;i++ )seen.insert(nums[i]);
        cout<<seen.size();
        for(int i=0;i<seen.size();i++){
            cout<<"smallest: "<<smallest;
            if(seen.find(smallest)!=seen.end()) smallest +=1;
            else return smallest;
        }
        return smallest;
    }
};