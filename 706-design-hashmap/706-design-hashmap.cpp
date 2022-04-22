auto speedup=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class MyHashMap {
public:
    vector<int> mp;
    MyHashMap() {
        mp.resize(1000001 , -1);
    }
    
    void put(int key, int value) {
        mp[key] = value;   
    }
    
    int get(int key) {
        if(mp[key] == -1){
            return -1;
        }
        else{
            return mp[key];
        }   
    }
    
    void remove(int key) {
        mp[key] = -1; 
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */