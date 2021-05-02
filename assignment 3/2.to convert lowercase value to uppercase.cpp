//program to read a character from keyboard and convert it into uppercase if it is in lowercase and vice versa.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   char s[30];
   int i;
   cout<<"Enter the String: "; 
   cin>>s;

   /* running the loop from 0 to the length of the string
    * to convert each individual char of string to uppercase
    * by subtracting 32 from the ASCII value of each char
    */
   for(i=0;i<=strlen(s);i++) { 
      /* Here we are performing a check so that only lowercase 
       * characters gets converted into uppercase. 
       * ASCII value of a to z(lowercase chars) ranges from 97 to 122 
       */ 
      if(s[i]>=97 && s[i]<=122)
      {
		s[i]=s[i]-32;
      }
      else if(s[i]>=65 && s[i]<=92)
      {
      	s[i]=s[i]+32;
	  }
   }
   cout<<"converting the given string:  "<<s;
   return 0;
}
