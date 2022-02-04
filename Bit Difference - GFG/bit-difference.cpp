// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int m,set = 0;
        if(a>b){
            m=a;
        }
        else if(b>a){
            m =b;
        }
        else{
            return 0;
        }
        // cout<<m<<endl;
        //count the most significant set bit of bigger num
        while(m>0){
            m = m>>1;
            set++;
            
        }
        int ans =0;
        for(int i=0;i<set;i++){
            // cout<<"Entered loop"<<" ";
            int n_a=0, n_b=0;
            if((a&(1<<i))){
                // cout<<"a check"<<endl;
                n_a = 1;
            }
            if((b&(1<<i))){
                // cout<<"b check"<<endl;
                n_b = 1;
            }
            if(n_a!=n_b) ans++;
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends