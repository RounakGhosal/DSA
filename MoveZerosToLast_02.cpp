/* Optimized 
Time Complexity -> O(N)
Space Complexity -> O(1)*/
#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int i=-1;
    for (int j=0;j<nums.size();j++){
        if (nums[j]==0){
            i=j;
            break;
        }
    }
    for (int j=i+1;j<nums.size();j++){
        if (nums[j]!=0){
            int temp = nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
            i++;
        }
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
