#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,rem,temp;
    cout<<"Enter the number:";
    cin>>num;
    temp=num;
    while(temp>0)
    {      
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(rev==num)
    {
        cout<<"The number is palindrome.";
        cout<<"\nThe reverse of the number is:"<<rev;
    }
    else
    {
        cout<<"The number is not a palindrome number.";
    }
    return 0;
}