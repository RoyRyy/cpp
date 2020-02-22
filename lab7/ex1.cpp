#include <iostream>
#include <string>
using namespace std;
class human
{
    private:
      string b;
    public:
      human (string name)
      {
          b=name;
      }
      void sayhello()
      {
          cout<<"Hello,i am "<<b<<endl;
      }
};
int main()
{
     auto h1=human("Ryy");
    decltype(h1) h2=human("Roy");
    h1.sayhello();
    h2.sayhello();
}