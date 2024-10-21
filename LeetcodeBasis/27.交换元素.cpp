//
// Created by 16672 on 2024/10/21.
//

#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int l = 0;
        for(int r = 0; r < nums.size(); r++){
            if(nums[r] != val){
                //nums[k++] = nums[r];
                k++;
                swap(nums[l++], nums[r]);
            }else{
                continue;
            }
        }

        return k;
    }
};