class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i = 0; i < m.size(); ++i) {
            int diff = target - nums[i];
            auto it = m.find(diff);
            if(it != m.end())
                return (i, it -> second);
            m[nums[i]] = i;
        }
        return {};
    }
};
//如果key存在，则find返回key对应的迭代器，如果key不存在，则find返回unordered_map::end
