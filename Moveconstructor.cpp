#include <iostream>
using namespace std;
class A
{
    int *p;
    public:
    A()
    {
        p=new int[100];
        cout<<"Default Constructor"<<endl;
    }
    A(const A & obj)
    {
        p=new int[100];
        for(auto i=0;i<100;i++)
            p[i]=obj.p[i];
        cout<<"Copy constructor"<<endl;
    }
    A(const A && obj1)
    {
        p=obj1.p;
        cout<<"Move Constructor"<<endl;
    }
};

int main()
{
     A a;
  // A b = a;         //Copy Constructor call
     A b = move(a);  //Move Constructor call
//   A c = b;         //Copy Constructor call
     A c =move(b);   // Move Constructor call
}
