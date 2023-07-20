#include<iostream>
using namespace std;
void swap(int x,int y);
int main()
{
int x,y;
cout<<"INPUT";
cout<<"\n========";
cout<<"\nx=";
cin>>x;
cout<<"y=";
cin>>y;
swap(x,y);
return 0;
}
void swap(int x,int y)
{
int temp=0;
temp=x;
x=y;
y=temp;
cout<<"\nOUTPUT";
cout<<"\n========";
cout<<"\nx="<<x;
cout<<"\ny="<<y;
}