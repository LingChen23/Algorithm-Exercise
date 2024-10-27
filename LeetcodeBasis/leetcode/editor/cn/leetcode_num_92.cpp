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
private:
    ListNode* successor;
public:
    ListNode* reverseN(ListNode* head, int n){
        //ListNode* successor;
        if(n == 1){
            successor = head->next;
            return head;
        }

        ListNode* last = reverseN(head->next, n-1);
        head->next->next = head;
        head->next = successor;

        return last;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == 1){
            return reverseN(head, right);
        }
        head->next = reverseBetween(head->next, left - 1, right - 1);
        return head;
        /*
        if(right == left){
            return head;
        }
        ListNode* dum = new ListNode(-1);
        dum->next = head;
        ListNode* pre = dum;
        while (--left && --right){
            pre = pre->next;
            head = head->next;
        }
        ListNode* last = reverseN(head, right);
        pre->next = last;
        return dum->next;
         */
        /*
        int l = left;
        if(!head || !head->next)
            return head;
        ListNode* dum = new ListNode(-1);
        dum->next = head;
        ListNode* pre = dum;
        ListNode* cur = head;
        while(--l){
            pre = pre->next;
            cur = cur->next;
        }

        ListNode* mark = cur;
        while(--right - left + 2){
            ListNode* nex = cur->next;
            cur->next = pre->next;
            pre->next = cur;

            cur = nex;
        }
        if(mark != cur)
        mark->next = cur;
        return dum->next;
         */
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution92;
int main() {
    Solution solution = Solution();
    solution.reverseBetween(stringToListNode("[3,5]"),2,2);

    return 0;
}