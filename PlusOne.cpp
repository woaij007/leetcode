// Plus One
// Given a non-negative number represented as an array of digits, plus one to the number.

// The digits are stored such that the most significant digit is at the head of the list.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        // init addend to 1 and start from the last digits to add it
        int addend = 1;
        while(!digits.empty()) {
            result.push_back((digits.back() + addend) % 10);
            addend = (digits.back() + addend) / 10;
            digits.pop_back();
        }
        // after all digits processed, if addend still equal to 1, push back it to result
        if(addend == 1) {
            result.push_back(1);
        }
        // reverse result to get the right order of the number digits
        vector<int> reverse;
        while(!result.empty()) {
            reverse.push_back(result.back());
            result.pop_back();
        }
        return reverse;
    }
};