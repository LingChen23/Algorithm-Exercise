//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。 
//
// 有效字符串需满足： 
//
// 
// 左括号必须用相同类型的右括号闭合。 
// 左括号必须以正确的顺序闭合。 
// 每个右括号都有一个对应的相同类型的左括号。 
// 
//
// 
//
// 示例 1： 
//
// 
// 输入：s = "()" 
// 
//
// 输出：true 
//
// 示例 2： 
//
// 
// 输入：s = "()[]{}" 
// 
//
// 输出：true 
//
// 示例 3： 
//
// 
// 输入：s = "(]" 
// 
//
// 输出：false 
//
// 示例 4： 
//
// 
// 输入：s = "([])" 
// 
//
// 输出：true 
//
// 
//
// 提示： 
//
// 
// 1 <= s.length <= 10⁴ 
// s 仅由括号 '()[]{}' 组成 
// 
//
// Related Topics 栈 字符串 👍 4580 👎 0


namespace solution20{
    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0){
            return false;
        }
        /*
         * 3种情况
         * 1. 左括号多余 栈为空
         * 2. 不匹配 栈顶元素不同
         * 3. 右括号多余 字符串为空，栈不为空
         *
         * 匹配：栈和字符串都为空
         *
         */

        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(')');
            } else if(s[i] == '['){
                st.push(']');
            } else if(s[i] == '{'){
                st.push('}');
            } else if(st.empty() || s[i] != st.top()){
                //栈为空为空 栈顶元素不同
                return false;
            } else{
                st.pop();
            }
        }

        return st.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution20;
int main() {
    Solution solution = Solution();

    return 0;
}