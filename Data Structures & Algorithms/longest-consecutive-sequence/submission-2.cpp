class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> new_nums;

        int n = nums.size();
        for (int i = 0; i < n; i++){
            new_nums.insert(nums[i]);
        }

        vector<int> num(new_nums.begin(), new_nums.end());

        if (n == 0){
            return 0;
        }

        for (int i = 0; i < n; i++){
            cout<<num[i]<<" ";
        }

        int max_length = 1;
        int length = 1;

        for (int i = 1; i < n; i++){
            if (num[i] - num[i-1] == 1){
                length += 1;
            }
            else{
                max_length = max(max_length, length);
                length = 1;
            }
        }

        max_length = max(max_length, length);

        return max_length;
    }
};
