/*Write application which accept two file names from user. Compare the contents of
that two files. If contents are same then return true otherwise return false.
Input : Demo.txt Hello.txt
Output : Compare contents of Demo.txt and Hello.txt*/

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
    fd2=open(str2,O_RDONLY);
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
       
         char Arr[40];//glass
         char Arr2[40];
         int ret2=0;
        int ret = 0;
        
        while(((ret = read(fd,Arr,40)) != 0)&&((ret2 = read(fd2,Arr2,40)) != 0))
        {
            if((write(1,Arr2,ret2))!=(write(1,Arr,ret)))
            {
                cout<<"Different\n";
            }
             else
             {
                   cout<<"Same\n";
             }
            
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
