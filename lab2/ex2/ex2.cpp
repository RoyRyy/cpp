
#include <iostream>
using namespace std;
int main()
{
	typedef int ryy;
	ryy a = 1, b ,c,d;
	cout << "triangle\n";
	cout << "please input how large the triangle is:";
		cin >> c;
		for (a = 1; a <= c; a++) {
			for (d = 1; d <= c - a; d++) {
				cout << " ";
			}
				for (b = 1; b <= a; b++) {
					
					cout<<" " << c;
			
				}
				cout << "\n";
			
		}

	system("pause");
}

