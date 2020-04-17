/*Q.Two strings are said to be complete if on concatenation the 
final string contains all the 26 English alphabets. Write a function 
iscomplete(char [], char []) that takes two strings 
(can be of varying length) as an input, concatenate these into a t
hird string and check whether the concatenated string is complete or not. 
Usage of the function is shown as follows

int main()

{

if(iscomplete("hello","world")) 
printf("The strings form complete string!!");

else 
printf("The strings do not form complete string!!");

return(0)

}

*/

#include<stdio.h>
void clrscr()
{
 system("clear");
}

int iscomplete(char a[20],char b[20])
  {
   int i,j,m=0,z;
   char c[50];
   z='a'-'A';
   for (i=0;a[i]!='\0';i++)
    {
     c[i]=a[i]; 
    }
   for(j=0;b[j]!='\0';i++,j++) 
    {
     c[i]=b[j];
    }
   
   for(char a='A';a<='Z';a++)   
    { 
     m=0;
     for(j=0;c[j]!=0;j++)
      {
       if(c[j]==a || c[j]==a+z)
         m++;
      }   
      
      if(m==0)
        {return(0);}
     }
    return(1);
  }


int main()

 {

  if(iscomplete("Hello","world") )
    printf("The strings form complete string!!");
  else
    printf("The strings do not form complete string!!");

return(0);

}
