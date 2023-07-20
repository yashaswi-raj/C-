#include <iostream>
using namespace std;
int factorial();
int main() 
{
factorial();
return 0;
}
int factorial()
{
int n,i,a=1;
cout<<"Enter the number:";
cin>>n;
for(i=1;i<=n;i++)
{
a=a*i;
}
cout<<"The factorial of the number is: "<<a;
return 0;
}