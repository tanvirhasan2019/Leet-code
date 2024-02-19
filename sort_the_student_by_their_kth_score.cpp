class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
      for(int i=0; i<score.size(); i++){
          int j = i;
          while( j > 0){
              if(score[j-1][k] < score[j][k]) swap(score[j-1], score[j]);
              else break;
              j--;
          }
      }
      return score;
    }
};
