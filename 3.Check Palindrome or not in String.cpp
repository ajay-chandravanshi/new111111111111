#include <iostream>
using namespace std;
bool pal(string &str)
{
  int start=0;
  int end=str.length()-1;

  while(start<end)
  {
    if(str[start]!=str[end])
    {
        cout<<"Not a Palindrome";
        return false;
    }
     start++;
     end--;
  
  }
    return true;
}
int main()
{
 string str="naman";
 if(pal(str))
 {
    cout<<"Palindrome";
 }
}