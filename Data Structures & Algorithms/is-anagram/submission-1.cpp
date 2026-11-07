class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<int, int> freqS;
        unordered_map<int, int> freqT;

        for(char c : s){
            freqS[c]++;
        }

        for(char c : t){
            freqT[c]++;
        }

        for(int i = 0; i < s.length(); i++)
        {
            if(freqS[s[i]] != freqT[s[i]]){
                return false;
            }
        }
        return true;
    }
};