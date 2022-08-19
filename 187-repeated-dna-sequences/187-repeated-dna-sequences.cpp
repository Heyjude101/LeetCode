class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> v;
        unordered_set<string> ans_s;
        unordered_set<string> s1;
        //if size of array is less than 10 => we retrun empty!
        while(s.size() < 10){
            return v;
        }
        int i=0 , j  = 9;
        //make first string and push
        string temp = s.substr(0,10);
        s1.insert(temp);
        
        while(j < s.size()){
            i++;
            j++;
            string temp = s.substr(i , 10);
            //now insert if not there
            if(s1.count(temp)){
                ans_s.insert(temp);
            }
            else{
                s1.insert(temp);
            }
        }
        
        for(auto it: ans_s){
            v.push_back(it);
        }
        
        return v;
        
        
    }
};