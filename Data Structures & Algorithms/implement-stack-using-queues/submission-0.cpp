class MyStack {
public:
vector<int>st;


    MyStack() {

    }
    
    void push(int x) {
       st.push_back(x);
    }
    
    int pop() {
        if(st.size()!=0){
            int temp =st.back();
            st.pop_back();
            return temp;
        }
        else return -1;
       
    }
    
    int top() {
        if(st.size()!=0) return st.back();
        
    }
    
    bool empty() {
        if(st.size()!=0)return false;
        else return true;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */