class NumMatrix {
public:
    vector<vector<int>>prefixmatrix;
    NumMatrix(vector<vector<int>>& matrix) {
      int n = matrix.size();
       int m = matrix[0].size();
   
       prefixmatrix = vector<vector<int>>(n, vector<int>(m, 0));

        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            prefixmatrix[i][j]=matrix[i][j];
            if(j>0)  prefixmatrix[i][j] +=prefixmatrix[i][j-1];
            if(i>0)  prefixmatrix[i][j] +=prefixmatrix[i-1][j];
            if(i>0 && j>0)  prefixmatrix[i][j] -=prefixmatrix[i-1][j-1];
          cout << prefixmatrix[i][j] << " ";
          }
          cout<<",";
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum =prefixmatrix[row2][col2];
        if(row1>0) sum -=prefixmatrix[row1-1][col2];
        if(col1>0) sum -=prefixmatrix[row2][col1-1];
        if(col1>0 && row1>0) sum +=prefixmatrix[row1-1][col1-1];
        return sum ;
    }
};

/** 
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */