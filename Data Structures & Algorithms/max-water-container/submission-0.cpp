class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0;
        int i=0,j=heights.size()-1;
        while(i<j){
            int tempArea=0;
         if(heights[i]<heights[j]){
            tempArea=heights[i]*(j-i);
            i++;
         }
         else if(heights[i]>heights[j]){
            tempArea=heights[j]*(j-i);
            j--;
         }
         else{
            tempArea=heights[i]*(j-i);
            i++;
         }
         area=max(area,tempArea);
        }
        return area;
    }
};
