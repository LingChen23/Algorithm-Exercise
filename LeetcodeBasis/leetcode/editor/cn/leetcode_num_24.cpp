//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。 
//
// 
//
// 示例 1： 
// 
// 
//输入：head = [1,2,3,4]
//输出：[2,1,4,3]
// 
//
// 示例 2： 
//
// 
//输入：head = []
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：head = [1]
//输出：[1]
// 
//
// 
//
// 提示： 
//
// 
// 链表中节点的数目在范围 [0, 100] 内 
// 0 <= Node.val <= 100 
// 
//
// Related Topics 递归 链表 👍 2296 👎 0


namespace solution24{
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
        ListNode* swapPairs(ListNode* head) {
            /*
            if(!head || !head->next) return head;
            ListNode* dummyhead = new ListNode(-1);
            dummyhead->next = head;
            ListNode *pre = dummyhead; //虚拟指针

            ListNode* p = head;
            ListNode* mark1;
            ListNode* mark2; //工具指针

            while(p && p->next){
                //初始化工具指针
                mark1 = p->next;
                mark2 = p->next->next;

                //pre指向第一个结点
                p->next->next = p;
                p->next = mark2;
                pre->next = mark1;

                //重置pre和p
                pre = p;
                p = mark2;
            }

            return dummyhead->next;
            */

//            if(!head || !head->next){
//                return head;
//            }

            ListNode* dum = new ListNode(-1);
            dum->next = head;
            ListNode* cur = dum;
            while (cur->next && cur->next->next){
                ListNode* temp1 = cur->next;
                ListNode* temp2 = cur->next->next->next;
                cur->next = cur->next->next;    //1
                cur->next->next = temp1;
                temp1->next = temp2;
                cur = temp1;
            }

            return dum->next;
        }
    };
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution24;
int main() {
    Solution solution = Solution();
    solution.swapPairs(stringToListNode("[1,2,3,4]"));

    return 0;
}