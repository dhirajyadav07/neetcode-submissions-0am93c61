class Solution {
public:

    int canShip(vector<int>& weights, int days,int capacity){
        int currentDays=1;
        int currentWeight=0;
        for(int w : weights){
            if((currentWeight + w) > capacity){
                currentWeight=0;
                currentDays++;
            }
           currentWeight += w;
        }
        return currentDays <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left =*max_element(weights.begin(),weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        cout<<left<<":"<<right<<endl;
        int ans=right;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(canShip(weights,days,mid)){
                ans=mid;
                right=mid-1;
            }
            else left =mid+1;
            
        }
        return ans;
    }
};