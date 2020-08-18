#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    int ans=strcmpi(str1,str2);
    if(ans==0)
        cout<<0;
    else if(ans<=-1)
        cout<<-1;
    else
        cout<<1;
    return 0;




}
