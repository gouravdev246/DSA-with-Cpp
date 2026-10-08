class Solution {
public:
    string decodeString(string s) {

        stack<int> numStack;
        stack<string> strStack;

        int num = 0;
        string curr = "";

        for(char c : s) {

            if(isdigit(c)) {
                num = num * 10 + (c - '0');
            }

            else if(c == '[') {
                numStack.push(num);
                strStack.push(curr);

                num = 0;
                curr = "";
            }

            else if(isalpha(c)) {
                curr += c;
            }

            else if(c == ']') {

                int repeat = numStack.top();
                numStack.pop();

                string prev = strStack.top();
                strStack.pop();

                string temp = "";

                for(int i = 0; i < repeat; i++) {
                    temp += curr;
                }

                curr = prev + temp;
            }
        }

        return curr;
    }
};