/*3. Write application which accept two file names from user. Append the contents of
first file at the end of second file.
Input : Demo.txt Hello.txt
Output : Concat contents of Demo.txt at the end of Hello.txt*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
using namespace std;
  class Filex
{
  public:
  int fd;
  int fd2;
  Filex(char str[],char str2[])
  {
    fd=open(str,O_RDONLY);
    fd2=open(str2,O_RDONLY | O_APPEND);
    if((fd==-1)||(fd2==-1))
       {
            cout<<"Unable to create file\n";
            exit(0);
        }
        else
        {
            cout<<"File succesfully created..\n";
        }
   }
    
   void ReadFile()
   {
       
         char Arr[20];
         char Arr2[20];
         int ret1=0;
         int ret2= 0;
       
         while(ret2=(read(fd2,Arr2,5)!=0))
         {

      
           
         }
    
   }


  };
int main()
{
   char str[30];
   char str2[30];
   cout<<"Enter First  File name\n";
   cin>>str;
   
   cout<<"Enter Second file name\n";
   cin>>str2;

   Filex obj(str,str2);
   obj.ReadFile();

    return 0;
}
