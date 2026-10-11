class Solution {
public:
    string toLowerCase(string text) {
        transform(text.begin(), text.end(), text.begin(), ::tolower);

        return text ;
    }
};