//
// Created by 16672 on 2024/10/21.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 偏移量 有0偏移量+1
        //int slow = 0;
        int offset;
        for(int fast = 0; fast < nums.size(); fast++){
            if(nums[fast] != 0){
                nums[fast - offset] = nums[fast];
                nums[fast] = 0;
                //nums[nums.size() - slow - 1] = 0;
            }else{
                offset++;
            }
        }
    }
};
