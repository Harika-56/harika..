
#include<stdio.h>
#include<string.h>
int main() {
char str[56];
int i,len,count=0;
printf("enter a string:");
gets(str);
len=strlen(str);
for(i=0;i<len;++i)
{
    if(str[i]==str[len-i-1])
    count++;
}
if(len==count)
printf("palindrome");
else
printf("not palindrome");
}

