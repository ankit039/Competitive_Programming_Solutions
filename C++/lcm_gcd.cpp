#include <iostream>
using namespace std;

int gcd(int num1, int num2) {
    if (num2 == 0) {
        cout << num1 << "\n";
        return num1;
    }
    int r = num1 % num2;
    num1 = num2;
    num2 = r;
}

int lcm(int num1, int num2) {
    return (num1 * num2) / gcd(num1, num2);
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int num1, num2;
	    cin >> num1 >> num2;
	    cout << gcd(num1, num2) << " " << lcm(num1, num2) << "\n";
	}
	return 0;
}
