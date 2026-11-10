class Solution {
public:
    typedef pair<int , pair<int , int >> p ;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        vector<vector<int>> ans ; 
        priority_queue<p , vector<p>, greater<p>> pq;
      

        int m = nums1.size() ;
        int n = nums2.size() ;
  
        if (m == 0 || n == 0 || k == 0) return ans;

        // Push pairs of (nums1[i], nums2[0]) up to k elements
        for (int i = 0; i < min(m, k); i++) {
            pq.push({nums1[i] + nums2[0], {i, 0}});
        }

        // Pop the smallest sum and push the next element from nums2
        while (ans.size() < k && !pq.empty()) {
            auto top = pq.top();
            pq.pop();
            
            int i = top.second.first;
            int j = top.second.second;
            ans.push_back({nums1[i], nums2[j]});
            
            if (j + 1 < n) {
                pq.push({nums1[i] + nums2[j + 1], {i, j + 1}});
            }
        }
        return ans ;
        
    }
};