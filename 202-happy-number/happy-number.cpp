
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        
        // Loop until n becomes 1 (happy) or we detect a cycle
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int sum = 0;
            
            // Correctly extract and sum the squares of ALL digits
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;
        }
        
        return n == 1;
    }
};
