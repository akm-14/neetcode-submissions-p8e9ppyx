class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maximum_water = 0;
        for (int i = 0; i < heights.size(); i++){
            for (int j = i; j < heights.size(); j++){
                int water = min(heights[i], heights[j])*(j-i);
                maximum_water = max(maximum_water, water);
            }
        }
        return maximum_water;
    }
};
