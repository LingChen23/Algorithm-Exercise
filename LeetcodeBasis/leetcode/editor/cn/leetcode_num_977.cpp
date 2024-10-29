//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。 
//
// 
// 
//
// 
//
// 示例 1： 
//
// 
//输入：nums = [-4,-1,0,3,10]
//输出：[0,1,9,16,100]
//解释：平方后，数组变为 [16,1,0,9,100]
//排序后，数组变为 [0,1,9,16,100] 
//
// 示例 2： 
//
// 
//输入：nums = [-7,-3,2,3,11]
//输出：[4,9,9,49,121]
// 
//
// 
//
// 提示： 
//
// 
// 1 <= nums.length <= 10⁴ 
// -10⁴ <= nums[i] <= 10⁴ 
// nums 已按 非递减顺序 排序 
// 
//
// 
//
// 进阶： 
//
// 
// 请你设计时间复杂度为 O(n) 的算法解决本问题 
// 
//
// Related Topics 数组 双指针 排序 👍 1052 👎 0


namespace solution977{
    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k = nums.size() - 1;
        vector<int> result = nums;

        for(int i = 0, j = nums.size() - 1; i <= j;){
            if(nums[i] * nums[i] <= nums[j] * nums[j]){
                result[k--] = nums[j] * nums[j];
                j--;
            }else{
                result[k--] = nums[i] * nums[i];
                i++;
            }
        }

        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution977;
int main() {
    Solution solution = Solution();

    return 0;
}