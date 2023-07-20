#include<iostream>
using namespace std;
int main()
{
int n,i,t;
cout<<"Enter the number:";
cin>>n;
cout<<"MULTIPLICATION TABLE OF "<<n;
for(i=1;i<=10;i++)
{
t=n*i;
cout<<"\n"<<n<< " × " <<i<<" = "<<t;
}
return 0;
}