//import universal *.h
#include "../../../stdc.h"

using namespace std;


//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
//
// 
//
// 示例 1： 
// 
// 
//输入：head = [1,2,6,3,4,5,6], val = 6
//输出：[1,2,3,4,5]
// 
//
// 示例 2： 
//
// 
//输入：head = [], val = 1
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：head = [7,7,7,7], val = 7
//输出：[]
// 
//
// 
//
// 提示： 
//
// 
// 列表中的节点数目在范围 [0, 10⁴] 内 
// 1 <= Node.val <= 50 
// 0 <= val <= 50 
// 
//
// Related Topics 递归 链表 👍 1466 👎 0


namespace solution203{
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyhead = new ListNode(-1);
        dummyhead->next = head;
        ListNode* list = dummyhead;
        ListNode* mark = head;
        while(mark != nullptr){
            if(mark->val == val){   //要删除元素 list下一个节点跳过该元素
                list->next = mark->next;
            }else{  //list值为下一节点
                list = list->next;
            }
            mark = mark->next;
            //list = list->next;
        }

        return dummyhead->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution203;
int main() {
    Solution solution = Solution();
    solution.removeElements(stringToListNode("[7,7,7,7]"), 7);

    return 0;
}