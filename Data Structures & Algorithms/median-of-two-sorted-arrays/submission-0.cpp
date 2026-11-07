class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> temp;

        for(int i = 0; i < n; i++){
            temp.push_back(nums1[i]);
        }
        for(int i = 0; i < m; i++){
            temp.push_back(nums2[i]);
        }
        sort(temp.begin(), temp.end());

        int x = temp.size();
        double ans = 1;
        if(x % 2 == 0){
            ans = (temp[x/2-1] + temp[x/2])/2.0;
        }
        else{
            ans = temp[x/2];
        }
        return ans;
    }
};
