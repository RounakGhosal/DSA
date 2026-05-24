#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int sp = 2*n - 2;

    for (int i = 1; i <= 2*n - 1; i++) {
        int stars = i;

        if (i > n)
            stars = 2*n - i;

        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        for (int j = 1; j <= sp; j++) {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        if (i < n)
            sp -= 2;
        else
            sp += 2;
        cout << endl;
    }
    return 0;
}
