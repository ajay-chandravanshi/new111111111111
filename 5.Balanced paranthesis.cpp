#include <iostream>
using namespace std;
bool bp(string &str)
{
    int circle=0;
    int square=0;
    int curly=0;
    for(int i=0;i<str.length();++i)
  {
      char ch=str[i];
      if(ch=='(')
      circle++;
      else if(ch=='[')
      square++;
      else if(ch=='{')  
      curly++;
      else if(ch==')')
      {
        if(circle==0)
        {
            return false;
        }
        circle--;
      }            
      else if(ch=='}')
      {
        if(curly==0)
        {
            return false;
        }
        curly--;
      }            
      else if(ch==']')
      {
        if(square==0)
        {
            return false;
        }
        square--;
      }            
   }
  
  if(circle==0 && square==0 && curly==0)
  {
      return true;
  }
 return false;
    
}
int main()
{
   string str="([{}])" ;
   if(bp(str))
   {
       cout<<"balanced";
   }
   else
   {
       cout<<"unbalanced";
   }
    
}