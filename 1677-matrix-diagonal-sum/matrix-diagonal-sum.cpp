class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0 ;
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0 ; i < n ; i++ ){
            
                sum += mat[i][i];
        }
        
        for(int j = 0 ; j < n ; j++ ){
            if(m % 2 == 0){

                sum += mat[j][m - j - 1];
            }else{
                if(j == m - j - 1){
                    continue;
                }
                sum += mat[j][m - j - 1];

            }
            
        }
        return sum ;
        
    }
};