//
// Created by 16672 on 2024/10/21.
//
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = nums.size();
        auto it1 = nums.begin();
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i + 1]){  // 如果和下一个元素相同
                k--;
                i--;    //当前元素要一直和下一个元素比较
                nums.erase(it1 + i + 1);    //删除元素
            }
        }

        return k;
    }
};