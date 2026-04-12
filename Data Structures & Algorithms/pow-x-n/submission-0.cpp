class Solution {
public:
    double myPow(double x, int n) {
        double number = 1;
        int m = 0;
        if (n < 0){
            m = 1;
        }
        for(int i = 1; i < abs(n)+1; i++){
            number *= x;
        }

        if (m){
            number = 1/number;
        }

    return number;
    }
};
