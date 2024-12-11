#include<iostream>
using namespace std;
void cybrom(int a)
{

 if(a<1)
 {

    return;

 }

 cout<<a<<"\t"; // head recursion
 cybrom(a-1);

 //cout<<a<<"\t"; // tail recursion
 
}

int main()
{
    cybrom(5);
}
  