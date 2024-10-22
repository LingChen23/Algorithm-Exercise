//
// Created by 16672 on 2024/10/22.
//

#include <iostream>
#include <vector>

using namespace std;

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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode dummyhead(-1);
        dummyhead.next = head;
        ListNode *pre = &dummyhead;  //虚拟节点

        ListNode* p = head;
        ListNode* mark1;
        ListNode* mark2;

        while(p && p->next){
            mark1 = p->next;
            mark2 = p->next->next;  //定义一些工具节点

            p->next->next = p;
            p->next = mark2;

            pre->next = mark1;
            pre = p;
            p = mark2;
        }

        return dummyhead.next;

    }
};
