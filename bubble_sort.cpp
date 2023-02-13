/*  this is bubble sort code
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
if they are in the wrong order

name-Adnan Faisal
Issue Date-13/2/2023  */

#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void display(int a[],int siz)
{
  cout<<"sorted array is ";
   for(int i=0;i<siz;i++)
    cout<<a[i]<<" ";
}

void bubble(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }

        }

    }
}

int main()
{
    int siz;
    cout<<"enter size of array ";
    cin>>siz;

    //int a[]={33,47,8,-9,10},n=5;
    int a[siz];
    cout<<"enter "<<siz<<" "<<"elements in array ";

    for(int i=0;i<siz;i++)
        cin>>a[i];

        bubble(a,siz);
        display(a,siz);

    return 0;
}
