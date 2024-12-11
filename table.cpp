#include<iostream>
using namespace std;
void Cybrom (int a , int b )
{

    if(b>10)
    {
        return;
    }
    cout<<a*b<<"\t";

    Cybrom(a,b+1);
}


int main()
{
    int x;
    cout << "enter no for table\n";

    cin>>x;
    Cybrom (x,1);
}