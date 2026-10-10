class Solution {
public:
    int finalValueAfterOperations(vector<string>& ope) {
        int sum = 0 ;
        for(auto val : ope){
            if(val == "X++" || val == "++X"){
                sum += 1 ;

            }else{
                sum += -1 ;
            }
        }
        return sum ;
        
    }
};