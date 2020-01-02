class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> substrs(numRows);
        string result = "";
        
        if(numRows == 1)
            return s;
        
        for(int i = 0; i < numRows; i++){
            int period1 = 2 * (numRows - 1) - 2 * i;
            int period2 = 2 * i;
            int currentIndex = i;
            
            if(i == 0 || i == numRows -1){
                while(currentIndex < s.size()){
                    substrs[i].push_back(s[currentIndex]);
                    currentIndex = currentIndex + 2 * (numRows - 1);
                }
            }
            else{
                while(currentIndex < s.size()){
                    substrs[i].push_back(s[currentIndex]);
                    currentIndex = currentIndex + period1;
                    if(currentIndex >= s.size())
                            break;
                    substrs[i].push_back(s[currentIndex]);
                    currentIndex = currentIndex + period2;
                }
            }
        }
        
        for(int i = 0; i < numRows; i++){
            result = result + substrs[i];
        }
        return result;
    }
};
