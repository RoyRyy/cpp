#include <iostream>
using namespace std;
int main()
{
	cout << "square\n";
	cout << "please input the length of the square:";
	int i = 1, m;
	cin >> m;
	if (m < 1)
		cout << "illegal input";
	if (m >= 80)
		cout << "the square is too big,please input a small number.";
	if (m >= 1 && m < 80)
		for (i = 1; i <= m * m; i++)
			if (i % m != 0)
				cout << "*";
			else
				cout << "*" << "\n";
  system("pause");
}

