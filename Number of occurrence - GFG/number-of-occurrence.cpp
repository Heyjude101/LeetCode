// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findFirst(int arr[] , int n , int x){
	    int ans  = 0;
	    int flag =0;
	    int start = 0 , end  =  n-1;
	    while(start<=end){
	        int mid = start + (end  - start)/2;
	        if(arr[mid] == x){
	            flag =1;
	            ans = mid;
	            end = mid -1;
	            continue;
	        }
	        if(arr[mid] <x){
	            start  = mid +1;
	        }
	        else{
	            end = mid -1;
	        }
	    }
	   // cout<<"1st: " <<ans<<" ";
	   if(flag ==0)
	    return -1;
	    else
	    return ans;
	}
	
	int findLast(int arr[] , int n , int x){
	    int ans  = 0;
	    int flag =0;
	    int start = 0 , end  =  n-1;
	    while(start<=end){
	        int mid = start + (end  - start)/2;
	        if(arr[mid] == x){
	            flag =1;
	            ans = mid;
	            start = mid +1;
	            continue;
	        }
	        if(arr[mid] <x){
	            start  = mid +1;
	        }
	        else{
	            end = mid -1;
	        }
	    }
	   // cout<<"2nd: " <<ans<<" ";
	   if(flag ==0)
	    return -1;
	    else
	    return ans;
	}
	
	int count(int arr[], int n, int x) {
	    int l = findFirst(arr , n , x);
	    int r = findLast(arr , n ,x);
	    if(l==-1&& r ==-1){
	        return 0;
	    }
	    return r-l+1;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends