#include<iostream>
using namespace std;

class top
{
    static int a;
    static int b;
    public:static void sum()
    {

        cout<<a+b;
    }

    };

    int top::a;
    int top::b;
    int main()
    {
        top::sum();
    }
