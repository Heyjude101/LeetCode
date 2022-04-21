class MyHashSet {
public:
    vector<int> hash;
    MyHashSet() {
        hash.resize(1000001 , -1);
    }
    
    void add(int key) {
        if(hash[key] == -1){
            hash[key] =1;
        }        
    }
    
    void remove(int key) {
        if(hash[key] == 1){
            hash[key] = -1;
        }  
    }
    
    bool contains(int key) {
        if(hash[key] ==1){
            return true;
        }
        else{
            return false;   
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */