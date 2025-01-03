#include <iostream>
using namespace std;
void toggle(string &str)
{
    for(int i=0;i<string.lenght();++i)
    {
        char ch=str[i];
        if(ch>='A' && ch<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(ch>='a' && ch<='z')
        {
            str[i]=str[i]-32;
        }
    }
}
int main()
{
 string str="aJaY";
 toggle(str);
 cout<<str;
}