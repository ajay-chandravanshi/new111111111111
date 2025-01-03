#include <iostream>
using namespace std;
bool subseq(string str1, string str2)
{
    int m=str1.length();
    int n=str2.length();
    int j=0;
    for(int i=0;i<m;++i)
    {
      if(str1[i]==str2[j])
     {
        j++;
      }
      
    }
    if(j==n)
    {
      return true;
    }
    return false;
}
int main()
{
  string str1="abcde";
  string str2="abcf";
  if(subseq(str1,str2))
  {
    cout<<"subseq";
  }
  else
  {
    cout<<"not subsequence";
  }
  
}