class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        int i = n-2;
        int new_digit = digits[n-1] + 1;
        digits[n-1] = new_digit%10;
        carry = new_digit/10;
        while (carry != 0 & i > -1){
            int new_digit = digits[i] + carry;
            digits[i] = new_digit%10;
            carry = new_digit/10;
            i--;
        }

        if (carry != 0){
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};
