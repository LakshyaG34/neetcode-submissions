class Solution {
public:
    void solve(vector<int>& nums, vector<int>& current, vector<vector<int>>& ans, int i){
        if(i >= nums.size()){
            ans.push_back(current);
            return;
        }

        solve(nums, current, ans, i+1);

        current.push_back(nums[i]);
        solve(nums, current, ans, i+1);
        current.pop_back();
    }  
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> current;
        vector<vector<int>> ans;
        int i = 0;

        solve(nums, current, ans, i);

        return ans;
    }
};