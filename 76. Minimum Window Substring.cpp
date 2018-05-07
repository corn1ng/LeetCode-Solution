class Solution {
public:
    string minWindow(string s, string t) {
        if (s.length() == 0 || t.length() > s.length()) {
            return "";
        }
        vector<int> freq(256, 0);
        for (char c : t) {
            freq[c]++;
        }
        int l = 0, h = 0, counter = 0, minLen = INT_MAX;
        string res = "";
        while (h < s.length()) {
            if (freq[s[h++]]-- > 0) {
                counter++;
            }
            while (counter == t.length()) {
                // [l, h)
                if (h - l < minLen) {
                    res = s.substr(l, h - l);
                    minLen = res.length();
                }
                if (++freq[s[l++]] > 0) {
                    counter--;
                } 
            }
        }
        return res;
    }
