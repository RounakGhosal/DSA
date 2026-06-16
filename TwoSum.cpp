#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> res;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            if (res.find(need) != res.end()) {
                return {res[need], i};
            }

            res[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    Solution obj;
    vector<int> ans = obj.twoSum(nums, target);

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No valid pair found" << endl;
    }

    return 0;
}
