#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter value on n: ";
	cin >> n;
	int s=1;
	for (int i=0;i<n;i++){
		for (int j=0;j<=i;j++){
			cout << s <<" ";
			s+=1;
		}
		cout << endl;
	}
	return 0;
}
