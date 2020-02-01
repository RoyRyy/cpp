#include <iostream>
using namespace std;
int main()
{
	typedef int ryy;
	ryy a = 1, b, c, d;
	cout << "diamond\n";
	cout << "please input how large the diamond is:";
	cin >> c;
	for (a = 1; a <= c; a++) {
		cout << "   ";
		for (d = 1; d <= c - a; d++) {
			cout << " ";
		}
		for (b = 1; b <= a; b++) {

			cout << " " << c;

		}
		cout << "\n";

	}
	for (a = c-1; a >= 1; a--) {
		cout << "   ";
		for (d = c - a; d >= 1; d--) {
			cout << " ";
		}
		for (b = a; b >= 1; b--){
			cout << " " << c;
		}
		cout << "\n";
	}


	system("pause");
}