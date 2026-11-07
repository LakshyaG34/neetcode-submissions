class Solution {
public:
    int hammingWeight(int n) {
        vector<int> temp;
        while(n){
            temp.push_back(n%2);
            n /= 2;
        }

        int count = 0;
        for(int num : temp){
            if(num == 1) count++;
        }

        return count;
    }
};