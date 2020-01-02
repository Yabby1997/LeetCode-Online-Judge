class Solution {
public: 
    int paths[101][101] = {0, };
    int uniquePaths(int m, int n) {
        for(int i = 1; i < m + 1; i++){
            for(int j = 1; j < n + 1; j++){
                if(i == 1 || j == 1)
                    paths[i][j] = 1;
                else
                    paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
            }
        }
        return paths[m][n];
    }
};
