class Solution {
public:
    string makeGood(string s) {

        string res = "";

        for(char c : s) {

            if(res.empty()) {
                res.push_back(c);
            }
            else {

                if(tolower(c) == tolower(res.back()) &&
                   c != res.back()) {

                    res.pop_back();
                }
                else {
                    res.push_back(c);
                }
            }
        }

        return res;
    }
};