class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) {
            return {-1, -1};
        }
        int first = -1;
        int last = -1;
        int min = 0;
        int max = nums.size() - 1;
        while (min <= max) {
            int mid = min + (max - min) / 2;
            if (target == nums[mid]) {
                first = mid; 
                max = mid - 1;  
            } else if (target > nums[mid]) {
                min = mid + 1;  
            } else {
                max = mid - 1;  
            }
        }
        min = 0;
        max = nums.size() - 1;
        while (min <= max) {
            int mid = min + (max - min) / 2;

            if (target == nums[mid]) {
                last = mid;    
                min = mid + 1;  
            } else if (target > nums[mid]) {
                min = mid + 1;  
            } else {
                max = mid - 1;  
            }
        }
        return {first, last};
    }
};