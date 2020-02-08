#include <iostream>
using namespace std;
int Fac(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Fac(n - 1);
}
int main()
{
	int n, m;
	cout << "Please input a number:";
	cin >> n;
	m = Fac(n);
	cout <<n<<"!="<< m;
	cout << "\n";
	system("pause");

}

