class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> startingPoints;
        
        for(int i = 0; i < gas.size(); i++){
            gas[i] = gas[i] - cost[i];
            if(gas[i] >= 0)
                startingPoints.push_back(i);
        }
        
        if(startingPoints.empty() == true)
            return -1;
        
        for(int i = 0; i < startingPoints.size(); i ++){
            int result = 0;
            for(int j = startingPoints[i]; j < gas.size(); j++){
                result = result + gas[j];
                if(result < 0)
                    break;
            }
            
            if(result >= 0){
                for(int k = 0; k < startingPoints[i]; k++){
                    result = result + gas[k];
                    if(result < 0)
                        break;
                }
            }
            if(result >= 0)
                return startingPoints[i];
        }
        return -1;
    }
};
