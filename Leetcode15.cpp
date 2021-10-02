class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int N = nums.size();
        if (N < 3) return {};
        sort(nums.begin, nums.end());
        
        for(int i = 0; i < N; ++i) {
            //避免重复
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = N-1;
            
            while(j < k) {
                int sum = sums[i] + sums[j] + sums[k];
                if(sum < 0) j++;
                if(sum > 0) k--;
                else {
                    res.push_back(nums[i], nums[j], nums[k]);
                    //避免重复
                    while(j < k && nums[j+1] == nums[j]) j++;
                    while(j < k && nums[k] == nums[k-1]) k--;
                    j++;
                    k--;
                }
            }
        }
        return res;
    }
};

//i j k 三指针
// [-1 -1 -1 0 1 2 3]
