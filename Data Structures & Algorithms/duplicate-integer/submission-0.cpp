class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        while(i < n-1){
            if (nums[i] == nums[i+1]){
                return true;
            }
            else{
                i++;
            }
        }
        
        return false;
    }
};