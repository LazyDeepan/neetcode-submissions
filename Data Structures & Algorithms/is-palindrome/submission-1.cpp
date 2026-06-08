class Solution {
public:
    bool isPalindrome(string s) {
    int left = 0;
        int right = s.size() - 1;

        while (left < right)
        {
            // skips non alphanumeric characters on the left
            if (!isalnum(s[left]))
            {
                left++;
                continue;
            }

            // skips non alphanumeric characters on the right
            if (!isalnum(s[right]))
            {
                right--;
                continue;
            }
            
            if (tolower(s[left]) != tolower(s[right]))
                return false;
            
            left++;
            right--;
        }
        return true;
    }
};
