class Solution {
public:
    unordered_map<string , string> mp;
    string generateUniqueKey(){
        string unique = "";
        for(int i=0;i<8;i++){
            int random = rand()%3;
            if(random == 0){
                unique += '0' + rand()%10;
            }
            else if(random == 1){
                unique +=  'a' + rand()%26;
            }
            else{
                unique += ('A' + rand()%26);
            }
        }
        if(mp.find(unique) != mp.end()){
            generateUniqueKey();
        }
        return unique;  
    }

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string key = generateUniqueKey();
        mp[key] = longUrl;
        return "http://tinyurl.com/" + key; 
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string lastEightLetters = shortUrl.substr(shortUrl.size()-8,shortUrl.size());
        return mp[lastEightLetters];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));