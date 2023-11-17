class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string str [26] = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        std::unordered_map<char, string> mp;
        int pos = 0;
        for(char i='a'; i<= 'z'; i++){
           mp[i] = str[pos];
           ++pos;
        }

        std::unordered_map<string, string> mp2;

        for(int i=0; i<words.size(); i++){
            string sub_re = "";
            for(int j=0; j<words[i].size(); j++){
               sub_re += mp[words[i][j]];
            }
            if(!mp2.count(sub_re)){
                mp2[sub_re] = sub_re;
            }
        }
        return mp2.size();
    }
};
