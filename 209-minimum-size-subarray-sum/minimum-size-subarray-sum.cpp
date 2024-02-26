class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int length = 0;
        int min_length = std::numeric_limits<int>::max();
        int sum = 0;

        while(right < nums.size()){
            sum += nums[right];
            length++;

            while(sum >= target){
                min_length = min(min_length, length);
                sum -= nums[left];
                left++;
                length--;
            }
            right++;
        }

        return min_length == std::numeric_limits<int>::max() ? 0 : min_length;
    }
};