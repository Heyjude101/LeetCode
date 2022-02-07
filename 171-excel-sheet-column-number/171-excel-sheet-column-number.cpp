class Solution {
public:
    int titleToNumber(string columnTitle) {
        int size  = columnTitle.length();
        int sum =0;
        int addon = int(columnTitle[size-1])-64;
        cout<<"Addon is: "<<addon<<endl;
        for(int i=1;i<size;i++){
            int mult = int(columnTitle[size-i-1])-64;
            int poww = pow(26,i);
            cout<<"Poww is: "<<poww<<endl;
            sum += poww*mult;
        }
        cout<<"sum id: "<<sum<<endl;
        return sum+addon;
        
    }
};