class Solution {
public:
    int integerBreak(int n) {
        int maxProduct = 0;

        for (int i = 2; i <= n; i++) {
            int q = n / i;
            int r = n % i;

            int product = 1;

            for (int j = 0; j < i; j++) {
                if (j < r)
                    product *= (q + 1);
                else
                    product *= q;
            }

            maxProduct = max(maxProduct, product);
        }

        return maxProduct;
    }
};