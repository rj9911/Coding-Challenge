class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int rows=points.size(), steps=0;
        for(int i =0; i< rows-1 ; i++){
           int dx = points[i+1][0] - points[i][0];
			int dy = points[i+1][1] - points[i][1];
            steps += max(abs(dx), abs(dy));
        }
        return steps;
    }
};