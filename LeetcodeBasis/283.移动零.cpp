//
// Created by 16672 on 2024/10/21.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        for(int fast = 0; fast < nums.size(); fast++){
            if(nums[fast] != 0){
                nums[slow++] = nums[fast];
                //nums[nums.size() - slow - 1] = 0;
            }
        }
        for(int i = slow; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};