#include<iostream>
#include<string.h>
using namespace std;

int  main()
{
    char s[100],t[100];
    cin>>s;
    cin>>t;
    if(!strcmp(s,strrev(t)))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;

}
