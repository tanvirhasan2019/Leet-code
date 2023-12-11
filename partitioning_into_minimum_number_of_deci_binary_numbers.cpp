class Solution {
public:
    int minPartitions(string n) {
        char c = '0';
        for(char d : n){
            if(d > c) c = d;
        }
        return c- '0';
    }
};
