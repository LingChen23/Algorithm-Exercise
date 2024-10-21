//
// Created by 16672 on 2024/10/21.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int min = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                if(min > max){
                    max = min;
                }
                min = 0;
            }if(nums[i] == 1){
                min++;
            }
        }
        return max > min ? max : min;
    }
};