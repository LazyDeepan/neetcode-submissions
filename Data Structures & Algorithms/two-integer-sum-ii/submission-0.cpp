class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> ans;
        int n = numbers.size();

        for (int i = 0; i < n; i++)
        {
            int complement = target - numbers[i];
            
            if (ans.count(complement))
                return {ans[complement] + 1, i + 1};
            
            ans[numbers[i]] = i;
        }
        return {};
    }
};
