class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> temp1;
        vector<int> temp2;
        vector<int> indexInfo(arr1.size(), 0);
        for(int i = 0; i < arr2.size(); i++){
            for(int j = 0; j < arr1.size(); j++){
                if(arr2[i] == arr1[j]){
                    temp1.push_back(arr1[j]);
                    indexInfo[j]++;
                }
            }
        }
        for(int i = 0; i < arr1.size(); i++){
            if(indexInfo[i] == 0)
                temp2.push_back(arr1[i]);
        }
        sort(temp2.begin(), temp2.end());
        temp2.insert(temp2.begin(), temp1.begin(), temp1.end());
        return temp2;
    }
};
