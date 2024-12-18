#include<iostream>
using namespace std;
//composite class 
class virus
{
    public: void affect()
    {
        cout<<"ur system got hacked\n";
    }
};
class Reward//composite
{
    virus v;
    public:void prize()
    {
        cout<<"u won $2,00,000\n";
        v.affect();
    }
};
int main()
{
    Reward r;
    r.prize();
}
