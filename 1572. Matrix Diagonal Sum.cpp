class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int n = mat.size() ;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
           
                    cnt += mat[i][i];
                    cnt += mat[i][n - 1 -i];
                }  
         if(n % 2 != 0){
             cnt -= mat[n/2][n/2];
         }
        
        return cnt;
    }
};

