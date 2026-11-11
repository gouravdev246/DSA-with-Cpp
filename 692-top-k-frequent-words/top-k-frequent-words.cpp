class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string, int> mp;

        // Step 1: Count frequency
        for (string word : words) {
            mp[word]++;
        }

        // Step 2: Create Min Heap
        auto cmp = [](const pair<string, int>& a,
                      const pair<string, int>& b) {

            if (a.second == b.second) {
                return a.first < b.first;
            }

            return a.second > b.second;
        };

        priority_queue<
            pair<string, int>,
            vector<pair<string, int>>,
            decltype(cmp)
        > pq(cmp);

        // Step 3: Insert elements
        for (auto it : mp) {

            pq.push({it.first, it.second});

            if (pq.size() > k) {
                pq.pop();
            }
        }

        // Step 4: Build answer
        vector<string> ans;

        while (!pq.empty()) {
            ans.push_back(pq.top().first);
            pq.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};