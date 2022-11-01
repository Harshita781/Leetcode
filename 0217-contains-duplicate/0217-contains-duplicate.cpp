#include<algorithm>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> s;
        for(int idx = 0; idx < nums.size(); idx++) {
            
            if(s.count(nums[idx]))
               return true;
            s.insert(nums[idx]);
        }
        return false;
    }
};