/*Write application which accept file name and one character from user. Count the
frequency of that character in file.
Input : Demo.txt
M
Output : Count occurrence of M in Demo.txt*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
using namespace std;
class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {
            cout<<"Unable to create file\n";
            exit(0);
        }
        else
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData(char ch)
    {
        char Arr[1];
        int ret = 0;
         int count=0;
        while((ret = read(fd,Arr,1))!= 0)
        {
           // (write(1,Arr,ret));
            
                if(*Arr==ch)
                {count++;}
        
        }
           cout<<count<<"\n";
    }
};
int main()
{
    char str[30];
    char ch;
    cout<<"Enter file name\n";
    cin>>str;
    cout<<"Enter character you want to enter";
    cin>>ch;
    FileX obj(str);
    
    obj.ReadData(ch);
    return 0;
}

