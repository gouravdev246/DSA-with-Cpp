class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi = INT_MIN ;
        for(auto s : strs){
            bool is_valid = all_of(s.begin(), s.end(), [](unsigned char c) {
                 return isdigit(c);
            });
            if(is_valid){
                int num = stoi(s); 
                maxi = max(num , maxi);
            }else{
                int len = s.size() ;
                maxi = max( len , maxi);
            }
        }
        return maxi ;

        
    }
};