#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
    FILE *fp;
    //opening the file to write data into it
    fp=fopen("text.txt","w");
    if(fp==NULL)
    {
        printf("File not Exist \n");
        return -1;
    }
    //initially, ch = 'a'
    char ch='a';
    //write characters from a to z into the file text.txt
    while(ch<='z')
    {
        fwrite(&ch,1,1,fp);
        ch++;
    }
} 
