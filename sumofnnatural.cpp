#include<iostream>
using namespace std;
int main()
{
int n,i,sum;
cout<<"SUM OF N NATURAL NUMBERS";
cout << "\n\nEnter a number of terms: "; 
cin >> n;
sum=0;
for(i=1;i<=n;i++) 
sum+=i;
cout<<"The sum of "<<n<<" is:"<<sum;
return 0;
}