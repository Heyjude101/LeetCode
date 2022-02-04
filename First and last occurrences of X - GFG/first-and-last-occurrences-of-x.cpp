// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int start = 0, end  = n-1; int k =0,p=0;
        int f=-1, s =-1;
        vector<int> ans;
        int flag = 0;
        while(start<=end){
            int mid  = start + (end-start)/2; 
            if(arr[mid] == x){
                flag  =1;
                //first occurance
                // cout<<"first loop: "<<mid<<endl;
                f = mid;
                end = mid -1;
                continue;
            }
            if(arr[mid]>x){
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        if(f!=-1) ans.push_back(f);
        else
         k =66;
        // int mid  = (n-1)/2; 
        start =0; end = n-1;
        // if(f==-1) {start = mid+1; end = n-1;}
        while(start<=end){
            int mid  = start + (end-start)/2; 
            if(arr[mid] == x){
                flag  =1;
                //second occurance
                // cout<<"second loop: " <<mid<<endl;
                s = mid;
                start = mid +1;
                continue;
            }
            if(arr[mid]>x){
                end = mid -1;
            }
            else{
                start = mid + 1;
                
            }
            
        }
        if(s!= -1) ans.push_back(s);
        else{
            p =66;
        }
        
        if(flag ==0) {
            ans.push_back(-1);
            return ans;
        }
        else if(k==66){
            ans.push_back(ans[1]);
        }
        else if(p == 66){
            ans.push_back(ans[0]);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends