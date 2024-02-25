class Solution {
public:
    int maxArea(vector<int>& height) {
        int width = height.size()-1;
        int left = 0;
        int right = height.size()-1;
        int max_vol = 0;

        while(left < right){
            int container_height = min(height[left], height[right]);
            int curr_vol = width*container_height;
            if(curr_vol > max_vol){
                max_vol = curr_vol;
            }
            if(height[left] < height[right]){
                left++;
            } else right--;

            width--;
        }

        return max_vol;
    }
};