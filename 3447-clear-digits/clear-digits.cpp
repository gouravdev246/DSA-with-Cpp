class Solution {
public:
    string clearDigits(string s) {
        string res = "";
        for(auto c : s){
            if(res.empty()){
                res.push_back(c);
            }else{
                if (c >= '0' && c <= '9'){
                    if(res.back() >= '0' && res.back() <= '9'){
                        continue;
                    }else{
                        res.pop_back();
                    }

                }else{
                    res.push_back(c);
                }

            }
        }
        return res ;
        
    }
};