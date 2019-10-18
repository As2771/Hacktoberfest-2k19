#include <stdio.h>

int main()
{
   
    int a=1;
    int b=1;
    int n;
    int i;
    int c;
    printf("Enter limit");
    scanf("%d",&n);
    printf("%d\t",a);
    printf("%d\t",b);
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}
