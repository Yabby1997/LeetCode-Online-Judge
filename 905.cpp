class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> result;
        for(vector<int>::iterator i = A.begin(); i < A.end(); i++){
            if(*i % 2 == 0)
                result.insert(result.begin(), *i);
            else
                result.push_back(*i);
        }
        return result;
    }
};
