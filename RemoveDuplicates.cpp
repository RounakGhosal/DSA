// If the array is in sorted order only then this will work
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int i=0;
    for (int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
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
	int pos = removeDuplicates(nums);
	cout << "There are " << pos << " unique elements in the array." << endl;
	cout << "The new array is : ";
	for (int i=0;i<pos;i++){
		cout << nums[i] << " ";
	}
	return 0;
}
