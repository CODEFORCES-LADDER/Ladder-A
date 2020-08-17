#include<iostream>
#include<string.h>
using namespace std;

int  main()
{
    int len;
    char s[100];
    gets(s);
    len=strlen(s);
    for(int i=len-1;i>=0;--i)
    {
        if(s[i]=='?' || s[i]==' ')
            continue;
        else if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' || s[i]=='y' ||s[i]=='Y'  )
           {
               cout<<"YES";
               break;
           }
        else
        {
            cout<<"NO";
            break;
        }
    }
    return 0;

}
