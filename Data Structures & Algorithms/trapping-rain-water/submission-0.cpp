class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>maxfromright;
        vector<int>maxfromleft;
        int maxright=INT_MIN;
        int maxleft=INT_MIN;
        int n=height.size();
        int result=0;
        for(int i=0;i<n;i++){
           if(height[i]>maxleft){
            maxleft=height[i];           
           }maxfromleft.push_back(maxleft);

           if(height[n-1-i]>maxright){
            maxright=height[n-1-i];            
           }maxfromright.push_back(maxright);
        }
        reverse(maxfromright.begin(), maxfromright.end());
        for(int i=0;i<n;i++){
            int temp=min(maxfromright[i],maxfromleft[i]);
             result+= abs(temp-height[i]);
             std::cout<<"result"<<result;
        }
        return result;
    }
};
