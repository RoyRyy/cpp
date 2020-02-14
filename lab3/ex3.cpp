#include <iostream>
using namespace std;
void link(char a[ ], char b[ ])
{
   int i=0,j=0,k=0;
   char *p1,*p2;
   p1=a;
   p2=b;
  while(*p1!='\0')
   p1++;
  while(*p2!='\0'){
  *p1++=*p2++;
  *p1='\0';}
}
int main()
{
	char a[100], b[100],c;
	int i=0, j=0;
	cout << "Please input string 1:" << endl;
  cin.get(a,100);
	cout << "Please input string 2:"<< endl;
	cin >> b;
	link(a,b);
  cout<<"Now the string is:";
	cout << a << endl;
	system("pause");
}