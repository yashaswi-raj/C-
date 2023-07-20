#include <iostream>
using namespace std;
int fibonnaci();
int main() 
{
fibonnaci();
return 0;
}
int fibonnaci()
{
int i,n,t1=0,t2=1,nt=0;
cout<<"Enter the number of terms:";
cin>>n;
if(n=0)
{
cout<<t1;
}
cout<<"Fibonnaci Series:\n";
for(i=1;i<=n;i++)
{
if(i==1)
{
cout<<t1<<",";
continue;
}
if(i==2)
{
cout<<t2<<",";
continue;
}
nt=t1+t2;
t1=t2;
t2=nt;
cout<<nt<<",";
}
return 0;
}