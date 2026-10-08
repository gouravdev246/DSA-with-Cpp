class Solution {
public:
    string removeDuplicates(string s) {
        // stack<char> st ;
        // for(char c : s){
        //     if(!st.empty() && st.top() == c){
        //         st.pop();
        //     }else{

        //          st.push(c);
        //     }
        // }
        // string res = "" ;
        // while(!st.empty()){
        //     char prev = st.top() ;
        //     st.pop() ;
        //     res = prev + res ;
        // }
        // return res ;
        string res = "";
        
        for (char c : s) {

            if (!res.empty() && res.back() == c) {
                res.pop_back(); 
            } else {
                res.push_back(c); 
            }
        }
        
        return res;

    }
};