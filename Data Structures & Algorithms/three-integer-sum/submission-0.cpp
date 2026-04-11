class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> answer;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n-2; i++){
            int j = i+1;
            int k = n-1;
            while(j < k){
                if (nums[i] == -(nums[j] + nums[k])){
                    vector<int> term;
                    term.push_back(nums[i]);
                    term.push_back(nums[j]);
                    term.push_back(nums[k]);
                    answer.insert(term);
                    j++;
                    k--;
                }
                else if (nums[i] > -(nums[j] + nums[k])){
                    k--;
                }
                else{
                    j++;
                }
            }
        }

        vector<vector<int>> triplets(answer.begin(), answer.end());

    return triplets;
    }
};
