#include<iostream>
using namespace std;
class top1
{
    int a=10,b=90;
    public:int sum()// function declare & define inside a class
    {
    return a+b;
    }
};
class top2
{
    int a=10,b=90;
    public:int sum();
};
int top2::sum()//function declared inside a class & but define outside a class
{
    return a+b;
}
int main()
{
    top1 pk;
    cout<<pk.sum();
    top2 t2;
    cout<<t2.sum();

}

