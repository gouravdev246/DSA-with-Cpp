class Solution {
public:
    string reorganizeString(string s) {

        // Step 1: Count frequency
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        // Step 2: Create Max Heap
        priority_queue<pair<int, char>> pq;

        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        // Step 3: Build answer
        string ans = "";

        pair<int, char> prev = {0, '#'};

        while (!pq.empty()) {

            // Get highest frequency character
            auto curr = pq.top();
            pq.pop();

            // Add character to answer
            ans += curr.second;

            // Reduce frequency
            curr.first--;

            // Put previous character back
            if (prev.first > 0) {
                pq.push(prev);
            }

            // Current character becomes previous
            prev = curr;
        }

        // Step 4: Check whether all characters were used
        if (ans.length() != s.length()) {
            return "";
        }

        return ans;
    }
};