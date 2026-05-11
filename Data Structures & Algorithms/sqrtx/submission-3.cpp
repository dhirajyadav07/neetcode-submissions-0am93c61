class Solution {
public:
    int mySqrt(int x) {
       int left =0, right =x;
       int result=0;
       while(left<=right){
        int mid = left + (right - left) / 2;
        long long temp = (long long)mid * mid; 
        
        if(temp==x){
            return mid;
        }
        else if(temp>x){
            
            right=mid-1;
            
        }
        else{
            result=mid;
            left=mid+1;
            
        }
       } 
return result;
       
       
    }
};