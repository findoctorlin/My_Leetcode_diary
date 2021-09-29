class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int k = nums.size() - 1;
        vector<int> res(nums.size(), 0);
        
        while(i <= j) {
            if(nums[j] * nums[j] > nums[i] * nums[i]) {
                res[k--] = nums[j] * nums[j];
                j--;
            }
            else {
                res[k--] = nums[i] * nums[i];
                i++;
            }
        }
        return res;
    }
};

//double pointers i j, k is for res[]
