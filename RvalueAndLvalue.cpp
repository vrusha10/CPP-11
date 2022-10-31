Rvalue :- Rvalue is not access memory address.
Lvalue :- Lvalue is access memory address.

#include<iostream>
using namespace std;
void fun(int &&a)
{
   cout<<a<<endl;
}
void fun(int &b)
{
   cout<<b<<endl;
}
int main()
{
  fun(10);
  int b=5;
  fun(b);
}


o/p= 10 
     5