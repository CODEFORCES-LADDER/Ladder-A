#include <iostream>
using namespace std;
int main()
{
    int n,len;
    string str;
    cin>>n;
    while(n>0)
    {
        cin >> str;
        len=str.length();
        if (len>10)
            cout << str[0] <<(len - 2)<< str[len-1]<<"\n";
        else
            cout <<str<< endl;
        n-=1;
    }
    return 0;
}
