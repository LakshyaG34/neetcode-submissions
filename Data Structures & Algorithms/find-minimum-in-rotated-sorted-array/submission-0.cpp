class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int minI = INT_MAX;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[left] <= nums[mid]){
                minI = min(minI, nums[left]);
                left = mid + 1;
            }
            else{
                minI = min(minI, nums[mid]);
                right = mid - 1;
            }
        }
        return minI;
    }
};
