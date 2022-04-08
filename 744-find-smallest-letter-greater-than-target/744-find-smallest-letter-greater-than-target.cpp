class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int size = letters.size();
        letters.push_back('.');
        vector<char>::iterator it= upper_bound(letters.begin() , letters.begin()+size ,  target);
        return (*it == '.')?letters[0]: *it;
        
    }
};