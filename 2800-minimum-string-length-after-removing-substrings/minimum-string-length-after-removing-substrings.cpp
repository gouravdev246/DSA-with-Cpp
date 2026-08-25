class Solution {
public:
    int minLength(string s) {

        string st;

        for(char c : s) {

            if(!st.empty()) {

                if((st.back() == 'A' && c == 'B') ||
                   (st.back() == 'C' && c == 'D')) {

                    st.pop_back();
                    continue;
                }
            }

            st.push_back(c);
        }

        return st.size();
    }
};