class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int>prefixProduct;
      vector<int>sufixProduct;
      vector<int>result;
      int tempprefix=1;
      int tempsufix=1;
      int n=nums.size();
      for(int i=0;i<n;i++){
          tempprefix *=nums[i];
          tempsufix *=nums[n-i-1];
          prefixProduct.push_back(tempprefix);
          sufixProduct.insert(sufixProduct.begin(),tempsufix);
      }

      for(int i=0;i<n;i++){
        int prefixIndex=i-1;
        int sufixIndex=i+1;
        if(prefixIndex==-1){
          result.push_back(sufixProduct[sufixIndex]);
        }
        else if(sufixIndex==n){
          result.push_back(prefixProduct[prefixIndex]);
        }
        else{
          result.push_back(prefixProduct[prefixIndex]*sufixProduct[sufixIndex]);
        }
      }
      return result;
    }
};
