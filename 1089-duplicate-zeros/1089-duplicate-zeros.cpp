class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        // int len = arr.size();
        // for(int i=0;i<len;i++){           
        //     if(arr[0] == 0){
        //         arr.push_back(arr[0]);
        //         arr.push_back(arr[0]);
        //         arr.erase(arr.begin());
        //     }
        //     else{
        //         arr.push_back(arr[0]);
        //         arr.erase(arr.begin());
        //     } 
        // }
        // arr.erase(arr.begin()+len , arr.end());
        //Optimal solution
        //find the length
        int len  = arr.size();
        int j=0;
        //first loop
        for(int i=0;i<len;i++){
            //check if the element is zero
            if(arr[i] == 0){
            //run another loop from backwards in the required range
                for(j=arr.size()-1;j>=i+1;j--)
                {
                arr[j] = arr[j-1];
            }
                //here J will have garbage value if we don't initialize it to 0
            i= j+1;
            }
        }
        
    }
};