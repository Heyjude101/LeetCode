class Solution {
public:
    int countVowelStrings(int n) {
        //initialize vector as {1,1,1,1,1}
        //to find for n = 1 -> we return the sum of the prefix sum vector
        // so n =1 , prefix sum vector == {1,1,1,1,1}:::: so sum of prefix sum is 5
        // now n =2 , prefix sum vector of n =2 {1,2,3,4,5}::: so sum is 15
        // now n =3,  prefix sum vector of n = 3,  {1, 3 ,6, 10 , 15}::: so sum is 35
        
        
        vector<int> vec(5, 1);
        for(int i=2;i<=n;i++){
            for(int j=1;j<5;j++){
                vec[j] = vec[j-1] + vec[j];
            }
        }
        
        return accumulate(vec.begin() , vec.end(), 0);
        
    }
};