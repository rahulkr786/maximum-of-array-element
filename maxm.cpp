#include<iostream>
using namespace std;
int main()
{
    int n,i,max,A[5];
    cout<<"enter the element of array";
    for(i=0;i<5;i++)
    {
        cin>>A[i];
    }
    
    max=A[0];
    for(i=0;i<5;i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    cout<<"maximum number is: "<<max;
    return 0;
}