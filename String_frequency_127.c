#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int count[127]={0};
    scanf("%s",s);
    for(int i=0;i<strlen(s);++i)
    {
        count[s[i]]++;
    }
    for(int i=0;i<127;++i)
    {
        if(count[i]>0)
            printf("%c - %d\n",(i),count[i]);
    }
    
}
