class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i= 1;
        int j = arr.size()-2;
        while(i<=j){
            int mid = i + (j-i)/2;
            if((arr[mid-1] < arr[mid]) && (arr[mid] > arr[mid+1])){
                return mid;
            }
            else if(arr[mid] < arr[mid+1]){
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
        }
        return -1;
    }
};

static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);