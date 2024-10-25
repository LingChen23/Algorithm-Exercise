//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给你单链表的头指针 head 和两个整数 left 和 right ，其中 left <= right 。请你反转从位置 left 到位置 right 的链
//表节点，返回 反转后的链表 。
//
// 
//
// 示例 1： 
// 
// 
//输入：head = [1,2,3,4,5], left = 2, right = 4
//输出：[1,4,3,2,5]
// 
//
// 示例 2： 
//
// 
//输入：head = [5], left = 1, right = 1
//输出：[5]
// 
//
// 
//
// 提示： 
//
// 
// 链表中节点数目为 n 
// 1 <= n <= 500 
// -500 <= Node.val <= 500 
// 1 <= left <= right <= n 
// 
//
// 
//
// 进阶： 你可以使用一趟扫描完成反转吗？ 
//
// Related Topics 链表 👍 1860 👎 0


namespace solution92{
    //leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int l = left;
      //  int r = right;
        if(!head || !head->next)
            return head;
        ListNode* dum = new ListNode(-1);
        dum->next = head;
        ListNode* pre = dum;
        ListNode* cur = head;
  //      ListNode* nex =
        while(--l){
            pre = pre->next;
            cur = cur->next;
        }
       // pre->next = nullptr;
        ListNode* mark = cur;
        while(--right - left + 2){
            //cur->next = cur->next->next;
            ListNode* nex = cur->next;
           // ListNode* pren = pre->next;
            cur->next = pre->next;
            pre->next = cur;

            cur = nex;
        }
        if(mark != cur)
        mark->next = cur;
        return dum->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution92;
int main() {
    Solution solution = Solution();
    solution.reverseBetween(stringToListNode("[1,2,3,4,5]"),2,4);

    return 0;
}