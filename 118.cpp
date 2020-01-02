class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i = 0; i < numRows; i++){
            vector<int> subVector;
            for(int j = 0; j < i + 1; j++){
                if(j == 0 || j == i){
                    subVector.push_back(1);
                }
                else{
                    subVector.push_back(result.back()[j - 1] + result.back()[j]);
                }
            }
            result.push_back(subVector);
        }
        return result;
    }
};
