class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0 ;
        int minp = INT_MAX  ; 
        if(prices.size() == 1){
            return maxp ; 
        }
        for(int i = 0 ; i < prices.size() ; i++){
            
            minp = min(minp , prices[i]) ;
            int sum = prices[i] - minp ;

            
            maxp = max(sum , maxp) ; 

            
        }
        return maxp ;
    }
};