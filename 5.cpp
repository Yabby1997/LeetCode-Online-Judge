class Solution {
private:
    string bestRecord = "";
    int bestRecordSize = 0;
    
public:
    string longestPalindrome(string s) {
        if(s.size() < 2)
            return s;
        
        for(int i = 0; i < s.size() - 1; i++){
            extendPalindrome(s, i, i);
            extendPalindrome(s, i, i + 1);
        }
        return bestRecord;
    }
    
    void extendPalindrome(string givenString, int from, int to){
        while(from >= 0 && to < givenString.size()){
            if(givenString[from] == givenString[to]){
                from--;
                to++;
            }
            else    break;
        }
        from++;
        to--;
        if(to - from + 1 > bestRecordSize){
            bestRecord = givenString.substr(from, to - from + 1);
            bestRecordSize = to - from + 1;
        }
    }
};
