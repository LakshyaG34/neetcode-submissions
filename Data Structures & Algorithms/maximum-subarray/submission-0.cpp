class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;

        int maxI = INT_MIN;
        int sum = 0;

        for(int right = 0; right < n; right++){
            sum += nums[right];
            maxI = max(maxI, sum);      // record BEFORE shrinking
            while(sum < 0){
                sum -= nums[left];
                left++;
            }
        }

        return maxI;
    }
};
