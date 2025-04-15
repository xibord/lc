class Solution {
public:
    int kthFactor(int n, int k) {
        int kth = -1;
        int factorCount = 0;
        for (int i=1; i<=n; i++) {
            if (n%i==0) {
                factorCount += 1;
                if (factorCount == k) {
                    return i;
                }
            }
        }
        return kth;
    }
};
