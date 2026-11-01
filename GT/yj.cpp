#include <iostream>
using namespace std;
int main()
{
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	carrots = carrots + 2;
	cout << "Here are two more.Now you have " << carrots << " carrots." << endl;
	return 0;
}
