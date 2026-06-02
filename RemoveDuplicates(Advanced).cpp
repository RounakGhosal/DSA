// This will work on duplicates at any position of the array.
#include <unordered_set>
#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    unordered_set<int> seen;
	int i=0;
    for (int j=0;j<nums.size();j++){
    	int x = nums[j];
        if(seen.find(x)==seen.end()){
            seen.insert(x);
            nums[i++]=x;
        }
    }
    return i;
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
