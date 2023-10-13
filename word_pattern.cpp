class Solution {
public:
    bool wordPattern(string pattern, string s) {
        std::unordered_map<char, string>mp1;
        std::unordered_map<string, char>mp2;
        int j= 0, total_string = 0;
        vector<string>str;
        string st = "";
        for(int i=0; i<s.size(); i++){
           if(s[i] == ' ') {
             str.push_back(st);
             st = "";   
           }
           else{
               st += s[i];
               if( i == s.size()-1) str.push_back(st);
           }
        }
        for(string x : str) cout<<x<<endl;
        if(str.size() != pattern.size()) return false;

        for(int i=0; i<pattern.size(); i++){
            if(mp1.count(pattern[i]) > 0 || mp2.count(str[i]) > 0 ){
                if(mp1[pattern[i]] != str[i]) return false;
                if(mp2[str[i]] != pattern[i]) return false;
            }
            mp1[pattern[i]] = str[i];
            mp2[str[i]] = pattern[i];
        }
        return true;
    }
};