class Solution {
public:
    string reformatDate(string date) {
        std::unordered_map<string, string>mp;
        mp[Jan] = 01;
        mp[Feb] = 02;
        mp[Mar] = 03;
        mp[Apr] = 04;
        mp[May] = 05;
        mp[Jun] = 06;
        mp[Jul] = 07;
        mp[Aug] = 08;
        mp[Sep] = 09;
        mp[Oct] = 10;
        mp[Nov] = 11;
        mp[Dec] = 12;

        string day = , month = , year = ;
        int cnt = 0;
        for(char c : date){
            if( c == ' ') ++cnt;
            if(cnt == 0){
                day += c;
            }else if(cnt == 1){
                if(c != ' ') month += c;
            }else{
                if(c != ' ') year += c;
            }
        }
        day.erase(day.size()-2, day.size());
        if(day.size() == 1) day.insert(0, 0);
        return year + - + mp[month] + - + day;
    }
};
