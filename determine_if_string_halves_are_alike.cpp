class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        if(c == 'a' || c == 'e' ||  c== 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        string first_halves = s.substr(0, s.size()/2), second_halves = s.substr(s.size()/2, s.size());
        int cnt = 0;
        for(int i=0; i<first_halves.size(); i++){
           if(isVowel(first_halves[i])) ++cnt;
           if(isVowel(second_halves[i])) --cnt;
        }
        return cnt == 0 ? true : false;
    }
};
