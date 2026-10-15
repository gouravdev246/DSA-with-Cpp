class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar; // Track reverse mapping
        
        stringstream ss(s);
        string word;
        int count = 0;
        
        while (ss >> word) {
            // If s has more words than the length of pattern, it's invalid
            if (count >= p.size()) {
                return false;
            }
            
            char c = p[count];
            
            // Check character -> word mapping
            if (charToWord.find(c) != charToWord.end()) {
                if (charToWord[c] != word) return false;
            } else {
                charToWord[c] = word;
            }
            
            // Check word -> character mapping (fixes your current bug)
            if (wordToChar.find(word) != wordToChar.end()) {
                if (wordToChar[word] != c) return false;
            } else {
                wordToChar[word] = c;
            }
            
            count++;
        }
        
        // If pattern has more characters than words in s, it's invalid
        return count == p.size();
    }
};
