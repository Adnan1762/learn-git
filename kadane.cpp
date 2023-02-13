#include<iostream>
using namespace std;

int maxSumarray(int arr[],int n)
{
    int maxSum=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>maxSum)
        maxSum=sum;

        if(sum<0)
        sum=0;
    }
    return maxSum;
}

int main()
{
    int a[8];
    cout<<"enter 8 elements ";
    for(int i=0;i<8;i++)
    cin>>a[i];

    cout<<maxSumarray(a,8);
    return 0;
}
