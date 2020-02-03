
#include<iostream>
using namespace std;
int main()

{
	int n;
	cin >> n;
	for (int i = 1; i <= 2 * n + 1; i++)
		cout << n << "  ";
	cout << endl;
	for (int j = 1; j < n; j++)
	{
    	cout << n << "  ";
		for (int h = 1; h <= j; h++)
			cout << (n - h) << "  ";
		for (int i = 1; i <= 2 * n - (2 * j + 1); i++)
			cout << (n - j) << "  ";
		for (int h = j; h > 0; h--)
			cout << (n - h) << "  ";
		cout << n << endl;
	}
	for (int j = n; j >= 1; j--)
	{	
		cout << n << "  ";
		for (int h = 1; h <= j; h++)
			cout << (n - h) << "  ";
		for (int i = 1; i <= 2 * n - (2 * j); i++)
			cout << (n - j) << "  ";
		for (int h = j - 1; h > 0; h--)
            cout << (n - h) << "  ";
		    cout << n << endl;
    }




	for (int i = 1; i <= 2 * n + 1; i++)
		cout << n << "  ";
	   cout << endl;
	for (int i = 1; i <= 6 * n + 1; i++)
      cout << "-";
	cout << endl;
	int i, j, k;
	for (i = 1; i <= n * 2 - 1; ++i)
	{
		if (i <= n)
			k = i;
		else
			k = 2 * n - i;
		for (j = 1; j <= k; ++j)
			cout << j << "  ";
		for (j = 1; j <= (n - k) * 2; ++j)
			cout << k << "  ";
		for (j = k - 1; j >= 1; --j)
			cout << j << "  ";
		    cout << endl;
	}
	system("pause");
}








