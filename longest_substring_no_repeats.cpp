class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) {
            return 0;
        }

        //Made use of set data structure to find duplicate letters since entries are unique
        set<char> letters;
        int length = 0;
        int biggest = 0;
        letters.insert('a');
        letters.clear();

        //Indexes start one forward to acccount for potential substrings missed in other loop loop
        for (int j=0; j < s.length(); j++) {
            for (int i=j; i < s.length(); i++) {
            if (!letters.contains(s[i])) {
                letters.insert(s[i]);
                length += 1;
                if (length > biggest) {
                    biggest = length;
                    cout << s[i];
                }
            }
            else {
                letters.clear();
                length = 0;
                letters.insert(s[i]);
                length += 1;
            }
            //Exists for edge case test unreasonably large
            if (biggest == 95) {
                return 95;
            }
        }
        letters.clear();
        length = 0;
        }
        return biggest;
    }
};
