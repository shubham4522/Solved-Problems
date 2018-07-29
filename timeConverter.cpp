#include<iostream>
#include<cstring>
using namespace std;


string intToString(int i)
{
std::string s = std::to_string(i);
return s;
}




string timeConverter(string s)
{


string hour = s.substr(0,2);

int h=stoi(hour);

if(s[8]=='A')
  {
    if(h==12)
       {
       
       s[0] ='0';
       s[1]='0';
         }
   }else
{
        if(h!=12)
                   {
                     h=h+12;
       string temp= intToString(h);
       s[0] =temp[0];
       s[1]=temp[1];
                    } 
}

return s.substr(0,8);
}

int main()
{
cout<<timeConverter("12:40:22AM");

}





