#include<stdio.h>
#include<string.h>
int main()
{
    char *s[6]={"Raj","Ahish","Reena","Sohen","Anil"};
    char*t;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%s\n",s[i]);
    }
}