#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i,m,k,w,n;
    
    for(i=0;i<5;i++){
      cin>>a[i];}
    for(m=0;m<4;m++)
        for(k=0;k<4-m;k++)
            if(a[k]>a[k+1]){
            w=a[k];
           a[k]=a[k+1];
            a[k+1]=w;}
       
    
    cout<<"the new line is:";
    for(n=0;n<5;n++){
    cout<<" "<<a[n];}
    cout<<"\n";
}