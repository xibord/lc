class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string p1 = "";
        string p2 = "";

        for (int i=0; i < str.size(); i++) {
            p1 = p1 + str[i];
            p2 = str[i] + p2;

        }
        cout << p1;
        cout << '\n';
        cout << p2;
        return p1 == p2;
    }
};
