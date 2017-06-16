class Flip {
public:
    vector<vector<int> > flipChess(vector<vector<int> > A, vector<vector<int> > f) {
        // write code here
            for (int i = 0;i < f.size();i++){
                int row = f[i][0];
                int col = f[i][1];

                if (row >= 0 && row < 4 && col - 1 >= 0 && col - 1 < 4)
                {
                    if (A[row][col - 1] == 0) A[row][col - 1] = 1;
                    else A[row][col - 1] = 0;
                }
                if (row-2 >= 0 && row-2 < 4 && col - 1 >= 0 && col - 1 < 4)
                {
                    if (A[row-2][col - 1] == 0) A[row-2][col - 1] = 1;
                    else A[row-2][col - 1] = 0;
                }
                if (row-1 >= 0 && row-1 < 4 && col >= 0 && col < 4)
                {
                    if (A[row-1][col ] == 0) A[row-1][col ] = 1;
                    else A[row-1][col ] = 0;
                }
                if (row-1 >= 0 && row-1 < 4 && col - 2 >= 0 && col - 2 < 4)
                {
                    if (A[row-1][col - 2] == 0) A[row-1][col - 2] = 1;
                    else A[row-1][col - 2] = 0;
                }
        }
        return A;    
    }
};



