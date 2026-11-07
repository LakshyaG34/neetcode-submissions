class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 0;
        int longest = 0;
        for(int i = 1; i < n; i++){
            if(nums[i-1] == nums[i]){
                continue;
            }
            else if(nums[i-1] + 1 == nums[i]){
                count++;
            }
            else{
                count = 0;
            }
            longest = max(longest, count);
        }
        return longest+1;
    }
};
