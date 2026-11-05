class Solution {
public:
    bool isCheck(vector<int> piles, int h , int x){
        int count = 0;
        for(int i = 0; i < piles.size(); i++){
            count += (piles[i]-1)/x + 1;
            if(count > h){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while(low <= high){
            int mid = (high - low)/2 + low;
            if(isCheck(piles, h, mid)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};