#include<iostream>
using namespace std;
int main()
{    int n,i, sum=0;
    cout<<"which number you want to sum: ";
    cin>>n;

for(int i = 1; i <= n; i++)
{
   sum = sum + i;
  }
cout<<"sum is: "<<sum<<endl;

return 0;
}
