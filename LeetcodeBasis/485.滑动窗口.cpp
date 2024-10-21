//
// Created by 16672 on 2024/10/21.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0;
        int m = 0;
        int r = 0;
        for(r = 0; r < nums.size(); r++){
            if(nums[r] == 0) {
                m = max(m, r - l);
                l = r + 1;
            }
        }

        return m > r - l ? m : r - l;
    }
};