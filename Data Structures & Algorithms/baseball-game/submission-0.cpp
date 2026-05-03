class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum =0;
        int n=operations.size();
        for(int i =0; i<n;i++ ){
            if(operations[i]=="+"){
              int temp1 =st.top();
              st.pop();
              int tempsum=temp1+st.top();
              st.push(temp1);
              st.push(tempsum);
                }
           else if(operations[i]=="C"){st.pop();}
           else if(operations[i]=="D"){
              
              st.push(2*st.top());}
           else {
                 int temp =stoi(operations[i]);
                 st.push(temp);
           }
        }
        while(!(st.size()==0)){sum += st.top();
        st.pop();}
        return sum ;
    }
};