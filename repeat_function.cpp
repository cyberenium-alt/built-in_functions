
#include<iostream>
using namespace std;

string string_repeat (string str , char repeat , char sep = ' ' , bool sep_opt = true)
{
  string repeated ;
  for( int i = 0 ; i < repeat ; i++ )
    {
     repeated += str ;
      if (sep_opt=false)
      {
         if (i < repeat-1)
         {
          repeated += sep;
         }
      }     
      else 
      {
        repeated += sep;
      }  
    }
    
  return repeated;
}

int main ()
{
  cout << "hjjjjjhello" ;


return 0;
}