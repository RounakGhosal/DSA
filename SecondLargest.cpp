#include<bits/stdc++.h>
using namespace std;
int secondLargestElement(vector<int>& nums) {
    int largest = nums[0];
    int slargest=-1;
    for (int i=1;i<nums.size();i++){
        if (nums[i]>largest){
            slargest=largest;
            largest=nums[i];
        }
        else if (nums[i]!=largest && nums[i]>slargest){
            slargest=nums[i];
        }
    }
    return slargest;
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
	int sl= secondLargestElement(nums);
	cout << "The second largest element is : " << sl;
	return 0;
}
