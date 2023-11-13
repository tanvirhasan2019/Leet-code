class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        std::vector<string> words;
        int i;

        /* Split all words from the text */
        string word  = ;
        for(i=0; i <text.size(); i++){
            if(i == text.size() -1 ){
                words.push_back(word+text[i]);
            }
            else if(text[i] == ' '){
                words.push_back(word);
                word = ;
            }else{
                word += text[i];
            }
        }

        // Return numbe of words if no broken letters
        if(brokenLetters.size() == 0 ) return words.size();
 
        std::unordered_map<char, char> broken_word_mp;

        for(i=0; i<brokenLetters.size(); i++){
             broken_word_mp[brokenLetters[i]] = brokenLetters[i];
        }

        int cnt = 0;
        for(i=0; i<words.size(); i++){
             word = words[i];
             bool isBroken = false;
             for(int j=0; j<word.size(); j++){
                 if(broken_word_mp.count(word[j]) > 0 ){
                     isBroken = true;
                     break;
                 }
             }
        }
        return cnt;
    }
};
