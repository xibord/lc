class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        int index = 0;

        for (int i=low; i <= high; i++) {
            index = 0;
            string temp = to_string(i);
            int val1 = 0;
            int val2 = 0;

            while (index != temp.size()/2) {
                val1 = val1 + temp[index];
                index += 1;
            } 
            index = temp.size()/2;
            while (index != temp.size()) {
                val2 = val2 + temp[index];
                index += 1;
            } 
            if (val1 == val2) {
                count += 1;
            }
        }
        return count;
    }
};
