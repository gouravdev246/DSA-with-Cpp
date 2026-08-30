class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        bool res = true ;
        for(int i = 0 ; i < s.size() ;i++){
            if(s[i] == t[i]){
                continue;
            }
            else{
                res = false ;
                break;
            }
        }
        return res ;
        
    }
};