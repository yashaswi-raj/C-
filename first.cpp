#include<iostream>
using namespace std;
class addition
{
int a;
int b;
void sum()
{
cout<<"The Sum is:"<<a+b;
}
public:
void input()
{
cout<<"Enter two numbers:\n";
cin>>a>>b;
}


void display()
{
sum();
}
};
int main()
{
addition ob1;
ob1.input();
ob1.display();
return 0;
}