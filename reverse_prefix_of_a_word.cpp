class Solution {
public:
    string reversePrefix(string word, char ch) {
        string result = "";
        int ch_occur = 0;
        for(int i=0; i<word.size(); i++){
            result += word[i];
            if(ch == word[i] && ch_occur == 0){
                std::reverse(result.begin(), result.end());
                ++ch_occur;
            }
        }
        return result;
    }
};
