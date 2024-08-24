#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    // res.emplace_back(i);
                    // res.emplace_back(j);
                    return {i, j};
                }
            }
        }
        return {};
    }
};