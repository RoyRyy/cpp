#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    struct information
    {
        char name[5];
        int age;
        int height;
        struct Workplace
        {
            char Address[30];
            char Address2[40];
            char QQ[20];
        }WP;
    }inf;
    strcpy(inf.name,"Ryy");
    inf.age=20;
    inf.height=173;
    strcpy(inf.WP.Address,"Nanjing GuLou NewSeason");
    strcpy(inf.WP.Address2,"Suzhou WuZhong Wenzheng College");
    strcpy(inf.WP.QQ ,"QQ:2524380603");

    cout<<"Name:"<<inf.name<<endl;
    cout<<"Age:"<<inf.age<<endl;
    cout<<"Height:"<<inf.height<<endl;
    cout<<"Address1:"<<inf.WP.Address<<endl;
    cout<<"Address2:"<<inf.WP.Address2<<endl;
    cout<<inf.WP.QQ<<endl;
}