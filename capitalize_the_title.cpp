class Solution {
public:
    string capitalizeTitle(string title) {
        std::vector<string>vec;
        string str = "";

        for(int i=0; i<title.size(); i++){
           if(title[i] == ' '){
               if(str.size() > 2){
                   str[0] = std::toupper(str[0]);
                   vec.push_back(str);
               }else{
                   vec.push_back(str);
               }
               str = "";
           }else{
               str += std::tolower(title[i]);
           }
        }
        if(str.size() > 2){
            str[0] = std::toupper(str[0]);
            vec.push_back(str);
        }else{
            vec.push_back(str);
        }

        str = vec[0];
        for(int i=1; i<vec.size(); i++){
            str += " "+vec[i];
        }
        return str;
    }
};
