//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给定两个数组 nums1 和 nums2 ，返回 它们的 交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。 
//
// 
//
// 示例 1： 
//
// 
//输入：nums1 = [1,2,2,1], nums2 = [2,2]
//输出：[2]
// 
//
// 示例 2： 
//
// 
//输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//输出：[9,4]
//解释：[4,9] 也是可通过的
// 
//
// 
//
// 提示： 
//
// 
// 1 <= nums1.length, nums2.length <= 1000 
// 0 <= nums1[i], nums2[i] <= 1000 
// 
//
// Related Topics 数组 哈希表 双指针 二分查找 排序 👍 941 👎 0


namespace solution349{
    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        /*
        unordered_set<int> result;
        int hash[1010];
        for(int i = 0; i < nums1.size(); i++){hash[nums1[i]]++;}
        for(int i = 0; i < nums2.size(); i++){
            if(hash[nums2[i]] != 0){
                result.insert(nums2[i]);
            }
        }

        return vector<int>(result.begin(), result.end());
         */

        unordered_set<int> numset(nums1.begin(), nums1.end());
        unordered_set<int> result;

        for(int i = 0; i < nums2.size(); i++){
            if(numset.find(nums2[i]) != numset.end()){
                result.insert(nums2[i]);
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution349;
int main() {
    Solution solution = Solution();

    return 0;
}