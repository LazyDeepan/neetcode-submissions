class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        int count[26] = {0};
        int n = s.size();

        for (int i = 0; i < n; i++)
            count[s[i] - 'a']++;

        for (int i = 0; i < n; i++)
            count[t[i] - 'a']--;

        for (int x : count)
        {
            if (x != 0)
                return false;
        }
        return true;
    }
};
