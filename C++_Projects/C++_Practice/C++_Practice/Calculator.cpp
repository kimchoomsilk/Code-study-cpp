
#include <iostream>
using namespace std;
int main() {
	int num1 = 0;   //1��° ��
	char OP;		// ������
	int num2 = 0;   //2��° ��
	int result = 0; //�����
	cin >> num1;
	cin >> OP;
	cin >> num2;
	switch (OP)
	{
	case '+':
		result = num1+num2;
		cout << result << endl;
		break;
	case '-':
		result = num1 - num2;
		cout << result << endl;
		break;
	case '*':
		result = num1 * num2;
		cout << result << endl;
		break;
	case '/':
		if (num2 == 0) {
			cout << "Error : Division by zero";
			return 0;
		}
		result = num1 / num2;
		cout << result << endl;
		break;
	default:
		cout << "invaild operator";
		break;
	}
	return 0;
}