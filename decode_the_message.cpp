class Solution {
public:
    string decodeMessage(string key, string message) {
        std::vector<char>alpha;
        for(int i = 97; i<=122; i++){
            alpha.push_back(char(i));
        }

        std::unordered_map<char, char> mp;
        int j=0;
        for(int i = 0; i<key.size(); i++){
            if( key[i] != ' ' && mp.count(key[i]) == 0 ){
                mp[key[i]] = alpha[j];
                j++;
            }
        }

        string result = ;
        for(int i=0; i<message.size(); i++){
            if(message[i] == ' ') result +=  ;
            else result += mp[message[i]];
        }
        return result;
    }
};
