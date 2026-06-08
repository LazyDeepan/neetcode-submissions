class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> string_1;
        unordered_map<char, int> string_2;

        if (s.size() != t.size())
            return false;

        for (int i = 0; i < s.size(); i++)
        {
            string_1[s[i]]++;
            string_2[t[i]]++;
        
        }                
        if (string_1 == string_2)
            return true;
        
        return false;
    }
};
