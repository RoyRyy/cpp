#include<iostream>
using namespace std;
void reverse(char s[]) {
	int c, j, i = 0, k = 0;
	while (s[k] != '\0') {
		k++;
	}
	j = k - (i + 1);
	for (i = 0; i < j; i++, j--)
	{
		if (i < j)
			c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
int main() {
	printf("Please input a string:");
	char y[50];
	cin.get(y, 50);
	reverse(y);
	cout << y << endl;
	system("pause");
}