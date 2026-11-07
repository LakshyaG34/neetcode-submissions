class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> a1;
        vector<int> a2;
        for(int i = 0; i < num1.length(); i++){
            a1.push_back(num1[i] - '0');
        }
        for(int i = 0; i < num2.length(); i++){
            a2.push_back(num2[i] - '0');
        }
        
        vector<int> temp(a1.size() + a2.size(), 0);

        for(int i = a1.size()-1; i >=0; i--){
            for(int j = a2.size()-1; j>=0; j--){
                int product = a1[i]*a2[j];
                int pos = i+j+1;

                temp[pos] += product;

                temp[pos-1] += temp[pos]/10;
                temp[pos] %= 10;
            }
        }

        string str = "";

        for(int i = 0; i < temp.size(); i++){      // start at 0, not 1
            if(str.empty() && temp[i] == 0) continue;  // skip leading zeros
            str += (temp[i] + '0');
        }

        if(str.empty()) return "0";                // product was zero

        return str;
    }
};