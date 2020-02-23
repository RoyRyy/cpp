#include <iostream>
#include<cstring>
using namespace std;
struct personinfo
{
    int index;
    char name[30];
    short age;
}*p;
void show(struct personinfo *p)
{
    cout<<p->index<<endl;
    cout<<p->name<<endl;
    cout<<p->age;
}
int main()
{
    personinfo p;
    p.index=1;
    strcpy(p.name,"Ryy");
    p.age=20;
    show(&p);
}