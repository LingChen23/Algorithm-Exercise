//
// Created by 16672 on 2024/8/27.
//

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> strVec;
        for(auto str :strs){
            string data = str;
            sort(str.begin(), str.end());
            strVec[str].push_back(data);
        }

        vector<vector<string>> res;
        for(auto v : strVec)
            res.push_back(v.second);
        return res;
    }
};
