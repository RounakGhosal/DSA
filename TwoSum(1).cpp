/* T.C -> O(N) best & avg case
		  O(N^2) worst case
   S.C -> O(N) */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> res;
        for (int i=0;i<nums.size();i++){
            int need  = target - nums[i];
            if (res.find(need)!=res.end()){
                return {res[need],i};
            }
            res[nums[i]]=i;
        }
        return {};
    }
};
