class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int count = 0;
        int x = 0;
        int y = 0;
        for (int i : differences) {
            count += i;
            x = min(x, count);
            y = max(y, count);
            if (y - x > upper - lower) {
                return 0;
            }
        }

        return (upper - lower) - (y - x) + 1;
    }
};
