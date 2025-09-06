#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string str1;
	ofstream fout("output.txt",ios_base::out);
	getline(cin,str1);
	fout << str1 << endl;
	cout<<"File saved.";
	fout.close();
}