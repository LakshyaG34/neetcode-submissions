class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> ans;
        int n = strs.size();
        vector<string> temp(n, "a");
        for(int i = 0; i < n; i++){
            string curr = strs[i];
            sort(curr.begin(), curr.end());
            map[curr].push_back(strs[i]);
        }
        for(auto it : map){
            ans.push_back(it.second);
        }
        return ans;
    }
};
