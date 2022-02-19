#include <stdio.h>
void fibanocciseries(int n);
int main() {
    int term;
    printf("enter a term:\n");
    scanf("%d",&term);
    printf("the fibanacci series is:\n");
    fibanocciseries(term);
    return 0;
}
void fibanocciseries(int n)
{
    int a=0,b=1,c,i;
    for(i=0;i<n;i++)
    {
    printf("%d\t",a);    
    c=a+b;
    a=b;
    b=c;
    }
}
