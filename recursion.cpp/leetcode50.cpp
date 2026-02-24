class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;

        int64_t N = n; // Convert to int64_t to avoid overflow
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        return (N % 2 == 0) ? myPow(x * x, N / 2) : x * myPow(x * x, N / 2);
    }
};