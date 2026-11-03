class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long int sum = 0;
        for(auto it : nums) sum += it;
        int mx = *max_element(nums.begin(), nums.end());
        return nums.size() * mx - sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna