class Solution {
public:
    static int scoreOfString(string& s) {
        adjacent_difference(s.begin(), s.end(), s.begin());
        
        //sum the absolute values of the differences, starting from the second element
        return accumulate(s.begin()+1, s.end(), 0, [](int x, int y){
            return x+abs(y);
        });
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna