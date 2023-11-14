class Solution {
public:
    string sortSentence(string s) {
        std::map<int, string> mp;
        string str = ;
        for(int i=0; i<s.size(); i++){
            if( i == s.size() -1 ){
                mp[s[i] - '0' - 1] = str;
            }else if(s[i] == ' '){
                mp[str[str.size() - 1] - '0' - 1 ] = str.substr(0, str.size() - 1 );
                str = ;
            }else{
                str += s[i];
            }
        }
        str = ;
        for(auto const &x : mp){
            str += x.second +  ;
        }
        return str.erase(str.size() - 1, 1);
    }
};
