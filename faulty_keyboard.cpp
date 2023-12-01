class Solution {
public:
    string finalString(string s) {
        string str = ;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'i') std::reverse(str.begin(), str.end());
            else str += s[i];
        }
        return str;
    }
};
