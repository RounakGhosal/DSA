#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int>& nums) {
    int largest = nums[0];
    for (int i=1;i<nums.size();i++){
        if (largest<nums[i])
            largest = nums[i];
    }
    return largest;
}
int main(){
	vector<int> nums;
	int n,x;
	cout<< "Enter length of the array: ";
	cin >> n;
	cout << "Enter elements: " << endl;
	for (int i=0;i<n;i++){
		cin >> x;
		nums.push_back(x);
	}
	int l = largestElement(nums);
	cout << "The largest no. is " << l << endl;
	return 0;
}
