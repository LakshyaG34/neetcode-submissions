class Solution {
public:
    int reverse(int x) {
        vector<int> temp;
        while(x){
            temp.push_back(x%10);
            x /= 10;
        }

        // reverse(temp.begin(), temp.end());
        int number = 0;
        for(int i = 0; i < temp.size(); i++){
            // Check positive overflow
            if(number > INT_MAX / 10 ||
               (number == INT_MAX / 10 && temp[i] > INT_MAX % 10)){
                return 0;
            }

            // Check negative overflow
            if(number < INT_MIN / 10 ||
               (number == INT_MIN / 10 && temp[i] < INT_MIN % 10)){
                return 0;
            }
            number = number*10 + temp[i];
        }
        return number;
    }
};