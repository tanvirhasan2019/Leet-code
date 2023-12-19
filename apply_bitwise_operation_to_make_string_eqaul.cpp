class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        if(s == target) return true;
        int cnt1 = 0, cnt2 = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0') ++cnt1;
            if(target[i] == '0') ++cnt2;
        }
        if(cnt1 == s.size() || cnt2 == target.size()) return false;
        return true;
    }
};
