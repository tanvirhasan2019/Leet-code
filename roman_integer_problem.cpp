class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanData;
        romanData['I'] = 1;
        romanData['V'] = 5;
        romanData['X'] = 10;
        romanData['L'] = 50;
        romanData['C'] = 100;
        romanData['D'] = 500;
        romanData['M'] = 1000;

        int result = 0;
         
        if(s.size() == 1) return romanData[s[0]];

        for(int i = 0; i < s.size(); i++){
          if(romanData[s[i]] < romanData[s[i+1]]){
              result -= romanData[s[i]];
          }else{
              result += romanData[s[i]];
          }
        }
        return result;

    }
};