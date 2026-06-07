/* Brute force approach 
Time Complexity -> O(N)
Space Complexity -> O(N)
*/
#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    vector<int> temp;
    for (int i=0;i<nums.size();i++){
        if (nums[i]!=0)
            temp.push_back(nums[i]);
    }
    for (int i=0;i<temp.size();i++){
        nums[i]=temp[i];
    }
    for (int i=temp.size();i<nums.size();i++){
        nums[i]=0;
    }
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
	moveZeroes(nums);
	cout << "The new array is : ";
	for (int i=0;i<nums.size();i++){
		cout << nums[i] << " ";
	}
	return 0;
}
