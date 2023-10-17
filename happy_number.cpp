class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int>mp;
        bool isHappy = false;
        int i = 0;
            vector<int>digit;
            bool isDigit = false;
                if(n <= 0 ) isDigit = true;
                int x1 = n % 10;
                n = n / 10;
                digit.push_back(x1);
            }
            int sub_result = 0;
            for(int d : digit){
               sub_result += d * d;
            }
            digit.clear();
            if(sub_result == 1) return true;
            if(mp.count(sub_result) > 0) return false;
            
            mp[sub_result] = sub_result;
            n = sub_result;
        }
        return false;
    }
};
class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int>mp;
        bool isHappy = false;
        int i = 0;
            vector<int>digit;
            bool isDigit = false;
                if(n <= 0 ) isDigit = true;
                int x1 = n % 10;
                n = n / 10;
                digit.push_back(x1);
            }
            int sub_result = 0;
            for(int d : digit){
               sub_result += d * d;
            }
            digit.clear();
            if(sub_result == 1) return true;
            if(mp.count(sub_result) > 0) return false;
            
            mp[sub_result] = sub_result;
            n = sub_result;
        }
        return false;
    }
};
