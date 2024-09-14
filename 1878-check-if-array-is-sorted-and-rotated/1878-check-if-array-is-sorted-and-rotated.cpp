class Solution {
public:
    bool check(vector<int>& nums) {
         int count = 0;
    int n = nums.size();

    // Count the number of times the current element is greater than the next element
    for (int i = 0; i < n; ++i) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }

    // If the count is more than 1, it means the array is not sorted and rotated properly
    return count <= 1;}
};