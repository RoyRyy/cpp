#include <iostream>
using namespace std;
double Max(double a, double b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int main()
{
	double m, n,k;
	cout << "Please input two numbers:";
	cin >> m>>n;
	k = Max(m, n);
	cout << "The max is:" << k;
	cout << "\n";
	system("pause");
}