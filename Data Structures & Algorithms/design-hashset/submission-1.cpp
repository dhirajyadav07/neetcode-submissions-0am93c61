class MyHashSet {
public:
    int size;
    vector<vector<int>>hashset;
     int hashFunction(int key){
            return key % size;
        }
    MyHashSet() {        
       size=1000;
       hashset.resize(size);
    }
 
    void add(int key) {
        int index=hashFunction(key);
        for(auto val : hashset[index]){
            if(val==key)return ;
        }
        hashset[index].push_back(key);
    }
    
    void remove(int key) {
        int index=hashFunction(key);
        for(int i=0;i<hashset[index].size();i++){
            if(hashset[index][i]==key){
                hashset[index].erase(hashset[index].begin() + i);
            }
        }
    }
    
    bool contains(int key) {
        int index=hashFunction(key);
        for(auto val:hashset[index]){
            if(val==key)return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */