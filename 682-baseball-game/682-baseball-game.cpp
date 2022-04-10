class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for(auto it: ops){
            if(it == "D"){
                int score = s.top();
                s.push(score*2);
            }
            else if(it == "+"){
                int top1 = s.top();
                s.pop();
                int top2 = s.top();
                s.push(top1);
                s.push(top1 + top2);
                
            }
            else if(it == "C"){
                s.pop();
            }
            else{
                s.push(stoi(it));
            }
        }
        int num, sum = 0;
        while(!s.empty()){
            int num = s.top();
            s.pop();
            sum += num; 
        }                    
        return sum;

    }
};