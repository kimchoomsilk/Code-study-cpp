#include <iostream>
using namespace std;
int main() {
	int num1 = 0;
	int num2 = 1;
	cin >> num1;
	while (num2<=9) {
		cout << "" << num1 << " x " << num2 << " = " << num1*num2 << endl;
		num2++;
	}
}