class Solution {
private:
  std::unordered_map<string, string>encodedUrl;

public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
       string key_gen = "123456789abcdefghijklmnopqrstuvwxyz";
       bool unique_key = false;
       string key = "";

       while(!unique_key){
           for(int i=0; i<key_gen.size() / 3; i++){
               key += key_gen[rand() % key_gen.size()];
           }
           if(encodedUrl.count(key) == 0 ) unique_key = true;
           else key = "";
       }
       encodedUrl["http://tinyurl.com/" + key] = longUrl;
       return "http://tinyurl.com/" + key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return encodedUrl[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
