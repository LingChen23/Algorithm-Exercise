//
// Created by 16672 on 2024/10/21.
// r一直停留在为0位置 等待下一个不为0元素交换
//
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int r = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) continue;
            swap(nums[r++], nums[i]);
        }
    }
};