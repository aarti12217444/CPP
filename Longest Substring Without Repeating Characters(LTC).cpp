class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);  // Har character ka last index track karne ke liye
        int maxLen = 0, start = -1;
        
        for (int i = 0; i < s.size(); i++) {
            // Agar current character pehle aa chuka hai aur uska index start se bada hai
            if (dict[s[i]] > start)
                start = dict[s[i]];
            
            // Current character ka index update karo
            dict[s[i]] = i;
            
            // Maximum length update karo
            maxLen = max(maxLen, i - start);
        }
        
        return maxLen;
    }
};
