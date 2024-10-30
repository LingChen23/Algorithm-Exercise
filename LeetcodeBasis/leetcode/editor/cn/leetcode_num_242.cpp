//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的 字母异位词。 
//
// 
//
// 示例 1: 
//
// 
//输入: s = "anagram", t = "nagaram"
//输出: true
// 
//
// 示例 2: 
//
// 
//输入: s = "rat", t = "car"
//输出: false 
//
// 
//
// 提示: 
//
// 
// 1 <= s.length, t.length <= 5 * 10⁴ 
// s 和 t 仅包含小写字母 
// 
//
// 
//
// 进阶: 如果输入字符串包含 unicode 字符怎么办？你能否调整你的解法来应对这种情况？ 
//
// Related Topics 哈希表 字符串 排序 👍 952 👎 0


namespace solution242{
    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(26,0);
        for(int i = 0; i < s.size(); i++){hash[s[i] - 'a']++;}
        for(int i = 0; i < t.size(); i++){hash[t[i] - 'a']--;}
        for(int i = 0; i < hash.size(); i++){
            if(hash[i] != 0){return false;}
        }

        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution242;
int main() {
    Solution solution = Solution();

    return 0;
}