class Solution {
public:
    double resultTable[25][25][100] = {0.0, };
    double knightProbability(int numOfBoardCells, int remainMove, int currentRow, int currentColumn) {
        if(currentRow >= numOfBoardCells || currentRow < 0 || currentColumn >= numOfBoardCells || currentColumn < 0)
            return 0.0;
        else if(resultTable[currentRow][currentColumn][remainMove] != 0.0)
            return resultTable[currentRow][currentColumn][remainMove];
        else if(remainMove == 0)
            return 1.0;
        else{
            resultTable[currentRow][currentColumn][remainMove] = 0.125 * (knightProbability(numOfBoardCells, remainMove - 1, currentRow + 1, currentColumn + 2) + knightProbability(numOfBoardCells, remainMove - 1, currentRow + 1, currentColumn - 2) + knightProbability(numOfBoardCells, remainMove - 1, currentRow - 1, currentColumn + 2) + knightProbability(numOfBoardCells, remainMove - 1, currentRow - 1, currentColumn - 2) + knightProbability(numOfBoardCells, remainMove - 1, currentRow + 2, currentColumn + 1) + knightProbability(numOfBoardCells, remainMove - 1, currentRow + 2, currentColumn - 1) + knightProbability(numOfBoardCells, remainMove - 1, currentRow - 2, currentColumn + 1) + knightProbability(numOfBoardCells, remainMove - 1, currentRow - 2, currentColumn - 1));
        }
        return resultTable[currentRow][currentColumn][remainMove];
    }
};
