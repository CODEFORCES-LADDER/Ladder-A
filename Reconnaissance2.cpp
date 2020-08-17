#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i1,i2,diff;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    diff=abs(arr[0]-arr[1]);
    i1=1;
    i2=2;
    for(int i=1;i<n-1;i++)
    {
        if(abs(arr[i]-arr[i+1])<diff)
        {
            diff=abs(arr[i]-arr[i+1]);
            i1=i+1;
            i2=i+2;

        }
    }
    if(abs(arr[0]-arr[n-1])<diff){
        i1=1;
        i2=n;}
    cout<<i1<<" "<<i2;
    return 0;

}
