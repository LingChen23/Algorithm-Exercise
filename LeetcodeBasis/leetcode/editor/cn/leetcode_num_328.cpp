//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给定单链表的头节点 head ，将所有索引为奇数的节点和索引为偶数的节点分别组合在一起，然后返回重新排序的列表。 
//
// 第一个节点的索引被认为是 奇数 ， 第二个节点的索引为 偶数 ，以此类推。 
//
// 请注意，偶数组和奇数组内部的相对顺序应该与输入时保持一致。 
//
// 你必须在 O(1) 的额外空间复杂度和 O(n) 的时间复杂度下解决这个问题。 
//
// 
//
// 示例 1: 
//
// 
//
// 
//输入: head = [1,2,3,4,5]
//输出: [1,3,5,2,4] 
//
// 示例 2: 
//
// 
//
// 
//输入: head = [2,1,3,5,6,4,7]
//输出: [2,3,6,7,1,5,4] 
//
// 
//
// 提示: 
//
// 
// n == 链表中的节点数 
// 0 <= n <= 10⁴ 
// -10⁶ <= Node.val <= 10⁶ 
// 
//
// Related Topics 链表 👍 804 👎 0


namespace solution328{
    //leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct LinkedNode {
 *     int val;
 *     LinkedNode *next;
 *     LinkedNode() : val(0), next(nullptr) {}
 *     LinkedNode(int x) : val(x), next(nullptr) {}
 *     LinkedNode(int x, LinkedNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        /*
        int count = 2;
        LinkedNode* dum1 = new LinkedNode(-1);
        LinkedNode* dum2 = new LinkedNode(-1);
        dum1->next = head;
        dum2->next = head->next;
        LinkedNode* list1 = dum1->next;
        LinkedNode* list2 = dum2->next;
        head = head->next->next;
        // dum2->next = list2;
        while(head){
            count++;
            if(count % 2 != 0){
                list1->next = head;
                list1 = list1->next;
            }else{
                list2->next = head;
                list2 = list2->next;
            }

            head = head->next;
        }
        list2->next = nullptr;
        list1->next = dum2->next;

        return dum1->next;
         */

        auto oddhead = head, oddtail = oddhead;
        auto evenhead = head->next, eventail = evenhead;

        ListNode* cur = head->next->next;
        while(cur){
            oddtail->next = cur;
            oddtail = oddtail->next;
            cur = cur->next;

            if(cur){
                eventail->next = cur;
                eventail = eventail->next;
                cur = cur->next;
            }
        }

        oddtail->next = evenhead;
        eventail->next = nullptr;

        return oddhead;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution328;
int main() {
    Solution solution = Solution();
    solution.oddEvenList(stringToListNode("[1,2,3,4,5]"));

    return 0;
}