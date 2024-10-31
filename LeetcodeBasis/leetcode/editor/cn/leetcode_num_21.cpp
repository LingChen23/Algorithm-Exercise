//import universal *.h
#include "../../../stdc.h"

using namespace std;


//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
//
// 
//
// 示例 1： 
// 
// 
//输入：l1 = [1,2,4], l2 = [1,3,4]
//输出：[1,1,2,3,4,4]
// 
//
// 示例 2： 
//
// 
//输入：l1 = [], l2 = []
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：l1 = [], l2 = [0]
//输出：[0]
// 
//
// 
//
// 提示： 
//
// 
// 两个链表的节点数目范围是 [0, 50] 
// -100 <= Node.val <= 100 
// l1 和 l2 均按 非递减顺序 排列 
// 
//
// Related Topics 递归 链表 👍 3613 👎 0


namespace solution21{
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyhead = new ListNode(-1);
        //dummyhead->next = list1;
        ListNode* cur = dummyhead;
//
//        while(list1 || list2){
//            if(list2 && (!list1 || list1->val > list2->val)){
//                cur->next = list2;
//                cur = cur->next;
//                //list2->next = list1;
//                list2 = list2->next;
//                //mark2 = mark2->next;
//            }else{
//                cur->next = list1;
//                cur = cur->next;
//                list1 = list1->next;
//            }
//        }
//用值判断下一结点
        while(list1 && list2){
            if(list1->val > list2->val){
                cur->next = list2;
                list2 = list2->next;
            }else{
                cur->next = list1;
                list1 = list1->next;
            }
            cur = cur->next;
        }
        //合并剩余不为null节点
        if(list1){
            cur->next = list1;
        }else{
            cur->next = list2;
        }

        return dummyhead->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

}

using namespace solution21;
int main() {
    Solution solution = Solution();

    return 0;
}