class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> increasing(ratings.size() , 1);
        vector<int> decreasing(ratings.size() , 1);
        //find the answer for the increasing one
        for(int i=1;i<ratings.size();i++){
            if(ratings[i] > ratings[i-1]){
                increasing[i] = increasing[i-1]+1;
            }
        }
        cout<<"Increasing: "<<"\n";
        for(auto it: increasing){
            cout<<it<<" ";
        }
        cout<<"\n";
        //find the answer for the decreasing one
        for(int i=ratings.size()-1;i>=1;i--){
            if(ratings[i-1] > ratings[i]){
                decreasing[i-1] = decreasing[i]+1;
            }
        }
        
        cout<<"decreasing: "<<"\n";
        for(auto it: decreasing){
            cout<<it<<" ";
        }
        cout<<"\n";
        
        //taking maximum of both
        int sum =0;
        for(int i=0;i<ratings.size();i++){ 
            sum += max(increasing[i] , decreasing[i]);
        }
        return sum;
        
    }
};