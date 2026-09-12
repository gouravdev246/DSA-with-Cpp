class Solution {
public:
    void merge(vector<int>& arr, int st, int end) {
        int mid = st + (end - st) / 2;
        int len1 = mid - st + 1;
        int len2 = end - mid;

        int *first = new int[len1];
        int *second = new int[len2];

        int k = st;
        for(int i = 0; i < len1; i++) {
            first[i] = arr[k++];
        }
        
        int l = mid + 1;
        for(int i = 0; i < len2; i++) {
            second[i] = arr[l++];
        }

        k = st; 
        int idx1 = 0, idx2 = 0;
        while(idx1 < len1 && idx2 < len2) {
            if(first[idx1] < second[idx2]) {
                arr[k++] = first[idx1++];
            } else {
                arr[k++] = second[idx2++];
            }
        }
        

        while(idx1 < len1) {
            arr[k++] = first[idx1++];
        }

        while(idx2 < len2) {
            arr[k++] = second[idx2++];
        }
        

        delete[] first;
        delete[] second;
    }
    
    void mergeSort(vector<int>& nums, int st, int end) {
        if(st >= end) {
            return;
        }
        int mid = st + (end - st) / 2;
        mergeSort(nums, st, mid);
        mergeSort(nums, mid + 1, end);
        merge(nums, st, end);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int st = 0;

        int end = nums.size() - 1; 
        
        mergeSort(nums, st, end);
        return nums;
    }
};
