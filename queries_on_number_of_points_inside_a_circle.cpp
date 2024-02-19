class Solution {
public:
    bool isInside(int x1, int x2, int y1, int y2, int r)
    {
       int dis = pow(x2-x1, 2) + pow(y2-y1, 2);
       if(dis > r * r ) return false;
       return true;
    }
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>result;
        for(int i=0; i<queries.size(); i++){
            int x = queries[i][0], y = queries[i][1], r = queries[i][2];
           
            int cnt = 0;
        
            for(int j=0; j<points.size(); j++){
                if(isInside(x, points[j][0], y, points[j][1], r)) ++cnt;
            }
            result.push_back(cnt);
        }
        return result;
    }
};
