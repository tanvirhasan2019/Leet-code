class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        std::vector<string>vec;
        string str = "";
        for(int i=0; i<sentence.size(); i++){
            if(sentence[i] == ' '){
                vec.push_back(str);
                str = "";
            }else if(i == sentence.size() - 1 ) vec.push_back(str + sentence[i]);
            else str += sentence[i];
        }
        int cnt = 0;
        for(int i=0; i<vec.size(); i++){
           if(vec[i].substr(0, searchWord.size()) == searchWord ) return ++cnt;
           ++cnt;
        }
        return -1;
    }
}; 
