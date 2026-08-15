#include <vector>

class Solution {
public:
    int singleNonDuplicate(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // Ensure mid is even to check the start of a pair
            if (mid % 2 == 1) {
                mid--;
            }
            
            // If the pair matches, the single element is further right
            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2;
            } else {
                // If they don't match, the single element is at mid or to its left
                right = mid;
            }
        }
        
        // Left and right converge on the single element
        return nums[left];
    }
};
