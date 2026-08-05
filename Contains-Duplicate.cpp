#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        int n = nums.size(); // Gets the total number of elements safely

        for (int i = 0; i < n; i++) {
            // If the element nums[i] is already in our set, we found a duplicate
            if (seen.count(nums[i])) {
                return true; 
            }
            // Otherwise, store it in the set and keep moving
            seen.insert(nums[i]);
        }

        // If the loop finishes, all elements are unique
        return false;
    }
};
