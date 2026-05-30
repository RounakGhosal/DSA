#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high){
	vector <int> temp;
	int left = low;
	int right = mid+1;
	while (left <= mid && right <= high){
		if (arr[left]>=arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else {
			temp.push_back(arr[right]);
			right++;
		}
	}
	while (left<=mid){
		temp.push_back(arr[left]);
		left++;
	}
	while (right<=high){
		temp.push_back(arr[right]);
		right++;
	}
	for (int i=low;i<=high;i++){
		arr[i] = temp[i-low];
	}
}
void mergeSort(vector <int> &arr,int low,int high){
	int mid = (low+high)/2;
	if (low>=high) 
		return;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	merge(arr,low,mid,high);
}
int main(){
	int n;
	cout << "Enter length of the array: ";
	cin >> n;
	vector <int> arr;
	cout << "Enter array elements: ";
	for (int i=0;i<n;i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	cout << "Before sorting:-" << endl;
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	mergeSort(arr,0,n-1);
	cout << "After sorting:-" << endl;
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
