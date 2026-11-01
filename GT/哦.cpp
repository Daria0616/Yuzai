#include <iostream>
int main()
{
	using namespace std;
	int i, r;
	cout << endl << "Input an integer:" ;
	cin >> i;
	if (i < 0)
	{
		cout << "-";
		i = -i;
	}
	do
	{
		r = i % 10;
		cout << r;
	} while ((i = i / 10) != 0);
	cout << endl;
}
