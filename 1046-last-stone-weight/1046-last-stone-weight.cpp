static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        //push all in pq
        for(auto it: stones){
            pq.push(it);
        }
        // run a loop until pq becomes empty
        while(pq.size() > 1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(y==x) {}
            else pq.push(y-x);
            if(pq.empty()) return 0;
        }
        return pq.top();
    }
};