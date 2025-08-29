class Solution {
public:
    static int mySqrt(int x) {
        if (x == 0) return 0;

        double guess = x;
        while (guess * guess - x > 0.0001) {
            guess = (guess + x / guess) / 2;
        }

        return static_cast<int>(guess);
    }
};