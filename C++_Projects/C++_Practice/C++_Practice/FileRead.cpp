#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string str1;
	ifstream fin("output.txt");
	if (fin.is_open() == true) {
		while (getline(fin, str1)) {
			cout << str1 << endl;
		}
		fin.close();
	}
	else {
		cout << "File not found.";
		return 1;
	}
	return 0;
}