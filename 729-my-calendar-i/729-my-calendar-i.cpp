class MyCalendar {
public:
    map<int,int> mp;
    bool flag;
    MyCalendar() {
        flag = false;
    }
    
    bool book(int start, int end) {
        if(flag == false){
            mp[start] = end;
            flag = true;
            return true;
        }
        bool ret = true;
        for(auto it: mp){
            if(start >= it.second or end <= it.first){
                
            }
            else{
                ret = false;
                break;
            }
        }
        if(ret){
            mp[start] = end;
        }
        return ret;  
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */