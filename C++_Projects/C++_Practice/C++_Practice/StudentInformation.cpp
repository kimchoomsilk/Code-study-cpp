#include <iostream>
using namespace std;
struct Student{
	string name;
	int age;
	float score;
};
int main() {
	Student student1;
	cin >> student1.name;
	cin >> student1.age;
	cin >> student1.score;
	cout << "Name: " << student1.name << endl;
	cout << "Age: " << student1.age << endl;
	cout << "Score: " << student1.score << endl;
}