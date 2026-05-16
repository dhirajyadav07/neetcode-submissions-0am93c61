class Solution {
public:

    bool canEat(vector<int>& piles, int h,int k){
        if (k == 0) return false;
         long long currentTime=0;
        for(int p : piles){
            currentTime +=((p+( long long)k-1)/k);
            cout<<"currentTime: "<<currentTime<<" ";
        }
        return currentTime <= h;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size()==1){
            return (piles[0] + h - 1)/h;
        }
        int left = 1;
        int right=*max_element(piles.begin(),piles.end());
        // cout<<"left: right"<<left<<":"<<right<<endl;
        int ans=right;
        while(left<=right){
            int mid=left+(right-left)/2;
              
            if(canEat(piles,h,mid)){
                ans=mid;
                right =mid-1;
            }
            else {left =mid+1;}
        }
        return ans;
    }
};
