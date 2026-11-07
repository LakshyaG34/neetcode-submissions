class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++){
            int compliment = target - nums[i];
            if(map.find(compliment) != map.end()){
                return {map[compliment], i};
            }
            map[nums[i]] = i;
        }

        return {};
    }
};
