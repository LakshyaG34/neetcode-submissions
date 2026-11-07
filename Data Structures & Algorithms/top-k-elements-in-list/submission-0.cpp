class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> count;
        for(int num : nums){
            count[num]++;
        }
        vector<pair<int, int>> vec(count.begin(), count.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        for(auto it : vec){
            ans.push_back(it.first);
        }
        vector<int> temp(k, 0);
        for(int i = 0; i < k; i++){
            temp[i] = ans[i];
        }

        return temp;
    }
};
