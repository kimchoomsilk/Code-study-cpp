#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	int rannum = rand()%100+1;
	int num=0;
	int count = 0;
	while (true) {
		cin >> num;
		if (num == rannum) {
			cout << "Correct!\n";
			count++;
			break;
		}
		else if (num < 1 or num>100) {
			cout << "Out of Range!\n";
			count++;
		}
		else if (num > rannum) {
			cout << "Down\n";
			count++;
		}
		else if (num < rannum) {
			cout << "Up\n";
			count++;
		}
	}
	cout << "ÃÑ ½Ãµµ È½¼ö"<<count<<endl;
}