// Excel Sheet Column Number

// Given a column title as appear in an Excel sheet, return its corresponding column number.

// For example:

//     A -> 1
//     B -> 2
//     C -> 3
//     ...
//     Z -> 26
//     AA -> 27
//     AB -> 28 

class Solution {
public:
    int titleToNumber(string s) {
        int num = 0;
        int indx = 0;
        for(int i = s.size(); i > 0; i--) {
            int base = 1;
            int base_i = i;
            while(--base_i) {
                base *= 26;
            }
            num += (int)(s[indx]-64)*base;
            indx++;
        }
        return num;
    }
};