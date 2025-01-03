#include <iostream>
using namespace std;
void rev(string &str)
{
    int start=0;
    int end=str.length()-1;
    while(start<end)
    {
      char temp;
      temp=str[start];
      str[start]=str[end];
      str[end]=temp;

      start++;
      end--;
    }
}
int main()
{
    string str="VANSH";
    rev(str);
    cout<<str;
}