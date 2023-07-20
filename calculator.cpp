#include<iostream>
using namespace std;
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int division(int a,int b);
int main()
{
int choice;
int a,b;
cout<<"Enter first number:";
cin>>a;
cout<<"Enter second number:";
cin>>b;
do
{
cout<<"\nOPERATIONS\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVIDION\n5.EXIT\n";
cin>>choice;
switch(choice)
{
case 1:
add(a,b);
break;
case 2:
sub(a,b);
break;
case 3:
mul(a,b);
break;
case 4:
division(a,b);
break;
case 5:
exit(0);
break;
}
}
while(choice!=5);
return 0;
}
int add(int a,int b)
{
cout<<"The addition of the numbers is:"<<a+b;
return 0;
}
int sub(int a,int b)
{
cout<<"The substraction of the numbers is:"<<a-b;
return 0;
}
int mul(int a,int b)
{
cout<<"The multiplication of the numbers is:"<<a*b;
return 0;
}
int division(int a,int b)
{
cout<<"The division of the numbers is:"<<a%b;
return 0;
}