class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = 0;

        // store smallest remainders
        int min1 = INT_MAX;               // smallest element with remainder 1
        int min2 = INT_MAX;               // smallest element with remainder 2
        int min11 = INT_MAX, min12 = INT_MAX;  // two smallest with remainder 1
        int min21 = INT_MAX, min22 = INT_MAX;  // two smallest with remainder 2

        for (int n : nums) {
            sum += n;

            if (n % 3 == 1) {
                if (n < min11) { min12 = min11; min11 = n; }
                else if (n < min12) { min12 = n; }
            } 
            else if (n % 3 == 2) {
                if (n < min21) { min22 = min21; min21 = n; }
                else if (n < min22) { min22 = n; }
            }
        }

        if (sum % 3 == 0) return sum;

        int rem = sum % 3;

        int removeMin = INT_MAX;

        if (rem == 1) {
            if (min11 != INT_MAX) removeMin = min(removeMin, min11);
            if (min21 != INT_MAX && min22 != INT_MAX) 
                removeMin = min(removeMin, min21 + min22);
        } else { // rem == 2
            if (min21 != INT_MAX) removeMin = min(removeMin, min21);
            if (min11 != INT_MAX && min12 != INT_MAX)
                removeMin = min(removeMin, min11 + min12);
        }

        return sum - removeMin;
    }
};
