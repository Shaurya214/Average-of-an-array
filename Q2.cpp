#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter size of array:"<<endl;
cin>>n;
int arr[n];
cout<<"Enter elements:"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int avg;
int sum=0;
for(int i=0;i<n;i++)
{
    sum+=arr[i];
}
avg=sum/n;
cout<<"The average of the array is: "<<avg<<endl;
return 0;
}
