class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int r = mat.size();
        int c = mat[0].size();
        
        int st = 0, end = (r * c) - 1;
        
        while(st <= end) {
            int mid = st + (end - st) / 2;
            
            // Map 1D index back to 2D row and column
            int row = mid / c;
            int col = mid % c;
            
            if(mat[row][col] == target) {
                return true;
            } else if(mat[row][col] < target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
};