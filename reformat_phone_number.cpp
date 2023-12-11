class Solution {
public:
    string reformatNumber(string number) {
        string temp = "";
        for(char c : number){
            if( c == ' ' || c == '-') continue;
            else temp += c;
        }
        string result = "";
        int i=0;
        while(temp.size()){
            int n = temp.size();
            if(n > 4){
                result += temp.substr(0, 3);
                temp.erase(0, 3);
            }else if(n == 4){
               result += temp.substr(0, 2) + "-" + temp.substr(2, 4);
               temp.erase(0, 4);
            }else{
                result += temp.substr(0, temp.size());
                temp.erase(0, temp.size());
            }
            if(temp.size()) result += '-';
        }
        return result;
    }
};
