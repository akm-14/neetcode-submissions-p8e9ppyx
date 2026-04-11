class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      std::sort(nums.begin(), nums.end());

      int n = nums.size();
      vector<int> answer;
      vector<int> frequency;
      answer.push_back(nums[0]);
      frequency.push_back(1);
      int j = 0;
      for (int i = 1; i < n; i++){
        if (nums[i] == nums[i-1]){
            frequency[j]++;
        }
        else{
            answer.push_back(nums[i]);
            frequency.push_back(1);
            j++;
        }
      }

      vector<std::pair<int, int>> pairs;
      for (int i = 0; i < answer.size(); i++){
        pairs.push_back({frequency[i], answer[i]});
      }

      std::sort(pairs.rbegin(), pairs.rend());

      vector<int> top_K;
      for (int i = 0; i < k; i++){
        top_K.push_back(pairs[i].second);
      }

    return top_K;
    }
};
