//반복문 형식 사용
#include<iostream>
using namespace std;
int main() {
	int num = 0;
	unsigned long long result = 1;
	cin >> num;
	if (num==0) {
		cout << "1";
		return 0;
	}
	for (int i = num; i>0;i--) result*=i;
	cout << result << endl;
}