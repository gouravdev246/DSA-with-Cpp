class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int m = acc.size() , n = acc[0].size();
        int maxm = INT_MIN ;
        for(int i = 0 ; i < m ; i++){
            int sum = 0 ;
            for(int j = 0 ; j < n ;j++){
                sum += acc[i][j] ;

            }
            maxm = max(sum , maxm);
            sum = 0 ;
        }
        return maxm ;

        
    }
};