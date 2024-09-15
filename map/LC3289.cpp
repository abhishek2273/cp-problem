// 3289. The Two Sneaky Numbers of Digitville
/*
Example 1:

Input: nums = [0,1,1,0]

Output: [0,1]

Explanation:

The numbers 0 and 1 each appear twice in the array.

Example 2:

Input: nums = [0,3,2,1,3,2]

Output: [2,3]

Explanation:

The numbers 2 and 3 each appear twice in the array.

*/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        
        map<int,int> mp;
        vector<int>dp;

        for(auto &it:nums){
            mp[it]++;
        }

        for(auto &cnt:mp){
            if(cnt.second==2){
                dp.push_back(cnt.first);
            }
        }
        return dp;

        
    }
};
