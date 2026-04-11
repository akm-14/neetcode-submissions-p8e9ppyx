class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> pre;
        vector<int> post;
        vector<int> output;

        int pre_multiplier = 1;
        int post_multiplier = 1;
        
        pre.push_back(pre_multiplier);
        post.push_back(post_multiplier);

        for (int i = 0; i < n-1; i++){
            pre_multiplier *= nums[i];
            post_multiplier *= nums[n-i-1];
            pre.push_back(pre_multiplier);
            post.push_back(post_multiplier);
        }

        for (int i = 0; i < n; i++){
            int result = pre[i] * post[n-i-1];
            output.push_back(result);
        }

    return output;
    }
};
