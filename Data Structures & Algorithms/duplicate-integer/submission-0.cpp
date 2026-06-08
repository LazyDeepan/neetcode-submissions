class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (ans.count(nums[i]))
                return true;
            ans[nums[i]] = i;
        }
        return false;
    }
};