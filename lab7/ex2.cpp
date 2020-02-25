#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
class A
{
public:
    A(int b):m_public(b){}
    int m_public;
};

class B
{
    public:
    int n_a;
     B(int i): n_a(i){}

};
int main( )
{
    A b(9911); 
    B a1(702);
    B a2(520);
    cout<<b.m_public<<endl;
    cout<<a1.n_a<<" "<<a2.n_a; 
}