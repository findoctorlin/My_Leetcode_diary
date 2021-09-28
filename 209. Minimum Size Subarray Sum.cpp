class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int i = 0;
      int sum = 0;
      int sub_len = 0;
      int res = INT32_MAX;
      
      for(int j = 0; j < nums.size(); ++j){
        sum += nums[j];
        while(sum >= target) {
          sub_len = (j-i+1);
          res = res > sub_len ? sub_len : res;
          sums -= nums[i++];    //不断变更左窗界i的同时，从窗中剔除该最左元素
        }
      }
      return res == INT32_MAX ? 0 : res;
    }
};
