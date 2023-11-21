class Solution {
public:
    bool areNumbersAscending(string s) {
        int prevNumber;
        string st = ;

        for(int i=0; i<s.size(); i++){
            if(s[i] == ' ' || i == s.size() - 1 ){
               if(i == s.size() - 1) st += s[i];
                if(st.size()){
                  if(isdigit(st[0])){
                    if(prevNumber >= std::stoi(st)) return false;
                    else prevNumber = std::stoi(st);
                  }
                st = ;
               }
            }else st += s[i];
        }
        return true;
    }
};
