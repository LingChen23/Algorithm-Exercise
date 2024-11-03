//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给你一个由 n 个整数组成的数组 nums ，和一个目标值 target 。请你找出并返回满足下述全部条件且不重复的四元组 [nums[a], nums[
//b], nums[c], nums[d]] （若两个四元组元素一一对应，则认为两个四元组重复）： 
//
// 
// 0 <= a, b, c, d < n 
// a、b、c 和 d 互不相同 
// nums[a] + nums[b] + nums[c] + nums[d] == target 
// 
//
// 你可以按 任意顺序 返回答案 。 
//
// 
//
// 示例 1： 
//
// 
//输入：nums = [1,0,-1,0,-2,2], target = 0
//输出：[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// 
//
// 示例 2： 
//
// 
//输入：nums = [2,2,2,2,2], target = 8
//输出：[[2,2,2,2]]
// 
//
// 
//
// 提示： 
//
// 
// 1 <= nums.length <= 200 
// -10⁹ <= nums[i] <= 10⁹ 
// -10⁹ <= target <= 10⁹ 
// 
//
// Related Topics 数组 双指针 排序 👍 1984 👎 0


namespace solution18{
    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> fourSum(vector<int> nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > target && nums[i] >= 0) return result;
            if(i > 0 && nums[i] == nums[i - 1])
                continue;   //去重

            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] > target && nums[i] + nums[j] >= 0){  //剪枝
                    break;
                }
                if(j > i + 1 && nums[j] == nums[j - 1])
                    continue;   //去重
                int left = j + 1, right = nums.size() - 1;

                while (left < right){
                    if((long)nums[i] + nums[j] + nums[left] + nums[right] > target){
                        right--;
                    } else if((long)nums[i] + nums[j] + nums[left] + nums[right] < target){
                        left++;
                    } else{
                        result.push_back(vector{nums[i], nums[j], nums[left], nums[right]});
                        //去重
                        left++;
                        right--;

                        while (left < right && nums[left] == nums[left - 1]) left++;
                        while (left < right && nums[right] == nums[right + 1]) right--;
                    }
                }

            }
        }

        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution18;
int main() {
    Solution solution = Solution();
    solution.fourSum(stringToIntegerVector("[-9,-2,7,6,-8,5,8,3,-10,-7,8,-8,0,0,1,-8,7]"), 4);

    return 0;
}