#include<iostream>
using namespace std;
int main()
{
int n,i,flag=0;
cout<<"Enter the number:";
cin>>n;
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
cout<<"The number "<<n<<" is not a prime number.";
break;
}
}
if(flag==0)
{
cout<<"The number "<<n<<" is  a prime number.";
}
return 0;
}