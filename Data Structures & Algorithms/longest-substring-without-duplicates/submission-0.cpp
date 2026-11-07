class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        // int right = 0;
        unordered_set<char> seen;
        int maxSum = 0;

        for(int right = 0; right < s.length(); right++){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxSum = max(maxSum, right - left + 1);
        }

        return maxSum;
    }
};
