//
// Created by 16672 on 2024/10/21.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] != nums[i + 1]){  // 如果和下一个元素相同
                nums[k] = nums[i + 1];
                k++;
            }
        }

        return k;
    }
};