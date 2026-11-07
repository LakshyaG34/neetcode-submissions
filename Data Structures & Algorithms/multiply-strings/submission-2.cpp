class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> n1;
        vector<int> n2;

        for(int i = 0; i < num1.size(); i++){
            n1.push_back(num1[i] - '0');
        }
        for(int i = 0; i < num2.size(); i++){
            n2.push_back(num2[i] - '0');
        }
        vector<int> ans(n1.size()+n2.size(), 0);

        int n = n1.size();
        int m = n2.size();

        for(int i = n-1; i >= 0; i--){
            for(int j = m-1; j>=0; j--){
                int product = n1[i]*n2[j];
                int position = i+j+1;

                ans[position] += product;
                ans[position - 1] += ans[position]/10;

                ans[position] %= 10;
            }
        }

        string temp = "";

        for(int i = 0; i < ans.size(); i++){
            if(temp.empty() && ans[i] == 0){
                continue;
            }

            temp += (ans[i] + '0');
        }


        if(temp.empty()) return "0";
        return temp;
    }
};
