class Solution {
public:
    int alpha[95] = {0, };
    string result = "";
    
    void flushAll(){
        for(int i = 0; i < 95; i++){
            alpha[i] = 0;
        }
        result = "";
    }    
    
    int lengthOfLongestSubstring(string s) {
        int bestRecord;
        if(s.size() == 1)
            bestRecord = 1;
        else{
            bestRecord = 0;
            for(int j = 0; j < s.size(); j++){
                for(int i = j; i < s.size(); i++){
                    if(alpha[s[i] - 32] > 0){
                        bestRecord = (result.size() > bestRecord) ? result.size() : bestRecord;
                        flushAll();
                        break;
                    }
                    else{
                        alpha[s[i] - 32]++;
                        result.push_back(s[i]);
                        if(i == s.size() - 1)
                            break;
                    }
                }
            }
        }
        flushAll();
        return bestRecord;
    }
};
