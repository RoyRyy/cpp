#include <iostream>
using namespace std;
int main()
{
	typedef int ryy;
	ryy a, b=1, c,count=0;
	cout << "please input a number:";
	cin >> a;
	while (b != 0) {
		c = a & b;
		b = b << 1;
		if (c != 0)
			count++;
	}
	cout << count;
	cout << "\n";
	system("pause");
}

