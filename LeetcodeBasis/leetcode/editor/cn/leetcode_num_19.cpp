//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。 
//
// 
//
// 示例 1： 
// 
// 
//输入：head = [1,2,3,4,5], n = 2
//输出：[1,2,3,5]
// 
//
// 示例 2： 
//
// 
//输入：head = [1], n = 1
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：head = [1,2], n = 1
//输出：[1]
// 
//
// 
//
// 提示： 
//
// 
// 链表中结点的数目为 sz 
// 1 <= sz <= 30 
// 0 <= Node.val <= 100 
// 1 <= n <= sz 
// 
//
// 
//
// 进阶：你能尝试使用一趟扫描实现吗？ 
//
// Related Topics 链表 双指针 👍 2958 👎 0


namespace solution19{
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

/*
 * 第一种方法
class Solution {
public:
    LinkedNode* removeNthFromEnd(LinkedNode* head, int n) {

        int count = 0;
        LinkedNode* dummyhead = new LinkedNode(-1);
        dummyhead->next = head;
        LinkedNode* list = dummyhead;
        while(list->next != nullptr){
            count++;
            list = list->next;
        }
        list = dummyhead;
        while(--count - n + 1){
            list = list->next;
        }
        list->next = list->next->next;

        return dummyhead->next;
    }
};
 */

    class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            /*
            ListNode* dummyhead = new ListNode(-1);
            dummyhead->next = head;
            ListNode* left = dummyhead;
            ListNode* right = dummyhead;
            while(n--){
                right = right->next;
            }

            while(right->next){
                right = right->next;
                left = left->next;
            }

            left->next = left->next->next;

            return dummyhead->next; //dummyhead的下一个结点不是head
             */

            ListNode* dum = new ListNode(-1);
            dum->next = head;
            ListNode* fast = dum;
            ListNode* slow = dum;

            while(n-- && fast){
                fast = fast->next;
            }

            while(fast->next){
                fast = fast->next;
                slow = slow->next;
            }

            slow->next = slow->next->next;

            return dum->next;
        }

    };
//leetcode submit region end(Prohibit modification and deletion)


}



using namespace solution19;
int main() {
    Solution solution = Solution();
    solution.removeNthFromEnd(stringToListNode("[1]"),1);

    return 0;
}