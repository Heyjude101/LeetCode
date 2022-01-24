class Solution {
public:
    bool detectCapitalUse(string word) {
        int a = 0,b = 0,c =0;
        
        
        //All the letters are capital
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                a++;
            }
            else{
                break;
            }
        }
        if(a==word.length()){
            return true;
            cout<<"First executed"<<"\n";
        }
        
        
        //only first is capital
        if(isupper(word[0])){
            for(int i=1; i<=word.length();i++){
                if(islower(word[i])){
                    b++;
                }
            } 
        }
        if(b==word.length()-1){
            cout<<"Second executed"<<"\n";
            return true;
        }
        //all letters small
        for(int i=0;i<word.length();i++){
            if(islower(word[i])){
                c++;
            }
            else{
                break;
            }
        }
        if(c==word.length()){
            cout<<"Third executed"<<"\n";
            return true;
        }
        
        
        
        return false;
        
    }
};