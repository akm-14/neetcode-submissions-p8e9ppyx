class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0; //Here the array is indexed by 0 only, just that we have to return the answer in 1-indexed form
        int j = n - 1;
        vector<int> solution;
        while(i < j){ //since the same element can't be used twice, therefor no equality
            int k = numbers[i] + numbers[j];
            if (k > target){
                j--;
            }
            else if (k < target){
                i++;
            }
            else{
                solution = {i + 1, j + 1}; //we don't have append here, therefore, we need to assign the values
                break; //breaking out of loop once the solution is found
            }
        }
        return solution;
    }
};
