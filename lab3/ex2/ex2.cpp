#include <iostream>
#include<string>
using namespace std;
int main()
{
	char a[100], b[50];
	int i=0, j=0;
	cout << "Please input string 1:" << endl;
	cin >> a;
	cout << "Please input string 2:"<< endl;
	cin >> b;
	while (a[i] != '\0')
		i++;
	while (b[j] != '\0') {
		a[i++] = b[j++];
		a[i] = '\0';
	}
	cout << a << endl;
	system("pause");
	    



}

