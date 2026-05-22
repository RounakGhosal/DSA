#include<iostream>
using namespace std;
int main(){
	int n,sp=0;
	cout << "Enter value of n:";
	cin >> n;
	for (int i=0;i<n;i++){
		for (int j=1;j<=(n-i);j++){
			cout << "*";
		}
		for (int j=0;j<sp;j++){
			cout << " ";
		}
		for (int j=1;j<=(n-i);j++){
			cout << "*";
		}
		sp+=2;
		cout << endl;
	}
	sp = 2*n-2;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			cout << "*";
		}
		for (int j=0;j<sp;j++){
			cout << " ";
		}
		for (int j=1;j<=i;j++){
			cout << "*";
		}
		sp-=2;
		cout << endl;
	}
	return 0;
}
