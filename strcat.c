#include<stdio.h>
#include<string.h>
char* mystrcat(char *, char *);
int main()
{
    char s1[34],s2[34];
    printf("enter string1:");
    fgets(s1,34,stdin);
    printf("enter string2:");
    fgets(s2,34,stdin);
    printf("%s",mystrcat(s1,s2));
}
char* mystrcat(char *s1,char *s2)
{
    int i,j=0;
    int n=strlen(s1);
    for(i=n-1;s2[j];i++,j++)
    {
        s1[i]=s2[j];
        
    }
    s1[i]=0;
    return s1;
}
