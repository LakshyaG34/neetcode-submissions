class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //important property of XOR
        // x ^ x = 0 and x ^ 0 = x

        int ans = 0;

        for(int num : nums){
            ans ^= num;
        }

        return ans;
    }
};