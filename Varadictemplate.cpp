#include <iostream>
using namespace std;

void print()
{
    cout<<"Overflow Print"<<endl;       // To handle Base case of below recursive
}

template<typename T,typename...Types>     //template list
 void print (T a,Types ... c)              //variadic function
  {
      cout<<a<<endl;
      print( c...);
  }
int main()
{
    print(1,2,3.4,"Vrushabh",'C');
}
