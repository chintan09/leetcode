class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        for (int i = 0; i < strs.size(); i++) {
            if (i == 0) {
                prefix = strs[0];
                continue;
            }
            
            prefix = commonPrefix(prefix, strs[i]);
            
            if (!prefix.size()) break;
            
        }
        return prefix;
    }
    
    string commonPrefix(string a, string b) {
        int len = min(a.size(), b.size());
        int i;
        for (i = 0; i < len; i++) {
            if (a[i] != b[i]) break;
        }
        return a.substr(0, i);
    }
};
