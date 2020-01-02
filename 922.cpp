class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> sortedArray;
        int i = 0;
        int size = A.size();
        while(i < size){
            for(vector<int>::iterator j = A.begin(); j < A.end(); j++){
                if(isEven(i) && isEven(*j)){
                    sortedArray.push_back(*j);
                    A.erase(j); 
                    i++;
                }
                else if(! isEven(i) && ! isEven(*j)){
                    sortedArray.push_back(*j);
                    A.erase(j);    
                    i++;
                }
            }
        }
        return sortedArray;
    }
    
    bool isEven(int targetInt){
        return ((targetInt % 2 == 0) ? true : false);
    }
};
