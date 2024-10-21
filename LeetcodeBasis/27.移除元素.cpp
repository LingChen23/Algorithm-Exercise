//
// Created by 16672 on 2024/10/21.
//

#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int solw = 0;
        int k = 0;
        for(int fast = 0; fast < nums.size(); fast++){
            if(nums[fast] != val){
                nums[solw++] = nums[fast];
                k++;
            }
        }
    }
};