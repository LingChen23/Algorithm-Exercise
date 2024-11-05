//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给定一个非空的字符串
// s ，检查是否可以通过由它的一个子串重复多次构成。 
//
// 
//
// 示例 1: 
//
// 
//输入: s = "abab"
//输出: true
//解释: 可由子串 "ab" 重复两次构成。
// 
//
// 示例 2: 
//
// 
//输入: s = "aba"
//输出: false
// 
//
// 示例 3: 
//
// 
//输入: s = "abcabcabcabc"
//输出: true
//解释: 可由子串 "abc" 重复四次构成。 (或子串 "abcabc" 重复两次构成。)
// 
//
// 
//
// 提示： 
//
// 
// 
//
// 
// 1 <= s.length <= 10⁴ 
// s 由小写英文字母组成 
// 
//
// Related Topics 字符串 字符串匹配 👍 1220 👎 0


namespace solution459{
    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:

    bool repeatedSubstringPattern(string s) {
        /*
        *** 移动匹配 ***
         *          *
        string ss = s + s;
        ss.erase(ss.begin());
        ss.erase(ss.end() - 1);

        //ss.find(s)：这个调用会在字符串 ss 中搜索子字符串 s。
        // 如果找到，find 方法会返回 s 在 ss 中首次出现的位置（索引），
        // 如果没有找到，它会返回 std::string::npos（通常是一个很大的值，表示“未找到”）
        if(ss.find(s) != std::string::npos )
            return true;
        return false;
         */

        //*** KMP ***
        //1.求next数组
        if(s.size() == 0){
            return false;
        }

        int next[s.size()];
        getNext(next, s);

        int len = s.size();
        if(next[len - 1] != 0 && len % (len - next[s.size() - 1]) == 0)
            return true;
        return false;

    }

    void getNext(int* next, const string& s){
        //1.初始化
        //2.前后缀不同情况
        //3.前后缀相同情况
        next[0] = 0;
        int j = 0;
        for(int i = 1; i < s.size(); i++){
            while(j > 0 && s[i] != s[j]){
                j = next[j - 1];    //j 等于前一个
            }
            if(s[i] == s[j]){
                j++;
            }
            next[i] = j;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution459;
int main() {
    Solution solution = Solution();

    return 0;
}